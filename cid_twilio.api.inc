<?php
/**
* @file cid_twilio.api.inc
*/
/***
* Class for constructing the API call, 
*
*
***/
class CIDTwilioAPIRequest{

	//default API URL for the request
	private $api_url;

	//flag to designate weather or not we are in debug mode
	private $debug_mode;

	//get account SID
	private $account_sid;

	//get authorization token
	private $auth_token;


	/**
	*  Constructor
	*/

	public function __construct(){
		$this->debug_mode = variable_get('cid_twilio_debug_mode', CID_TWILIO_DEFAULT_DEBUG_MODE);
		$this->account_sid =  variable_get('cid_twilio_account_sid', CID_TWILIO_DEFAULT_ACCOUNT_SID);
		$this->auth_token = variable_get('cid_twilio_auth_token', CID_TWILIO_DEFAULT_AUTH_TOKEN); 
	}

}