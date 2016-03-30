<?php 
/**
* @file cid_twilio.admin.inc
* Create administrative form to change or alter admin settings
* 
**/
function cid_twilio_admin_form($form){
	$form = array();
	$form['cid_twilio_account_sid'] = array(
		'#title' => t('Twilio Account SID'), 
		'#description' => t('The Account SID found on the dashboard of the twilio account'),
		'#type' => 'textfield', 
		'#default_value' => variable_get('cid_twilio_account_sid', CID_TWILIO_DEFAULT_ACCOUNT_SID), 
	);
	$form['cid_twilio_auth_token'] = array(
		'#title' => t('Twilio Auth Token'), 
		'#description' => t('The Account Authorization Token found on the dashboard of the twilio account'), 
		'#type' => 'password', 
		'#default_value' => variable_get('cid_twilio_auth_token', CID_TWILIO_DEFAULT_AUTH_TOKEN),
	);
	$form['cid_twilio_debug_mode'] = array(
		'#title' => t('Debug mode'),
		'#description' => t('Enable debug mode if you would like to see the request URL, turn off on production or a live site'),
		'#type' => 'checkbox',
		'#default_value' => variable_get('cid_twilio_debug_mode', CID_TWILIO_DEFAULT_DEBUG_MODE),
	);
	return system_settings_form($form);
}