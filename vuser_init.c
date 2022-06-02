vuser_init()
{
	
	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	rc=lrvtc_connect("localhost",9000,VTOPT_KEEP_ALIVE);
	
	lr_start_transaction("Expleo_Ecomm_001_Launch");
	
	web_reg_find("Text=Sign in","SaveCount=Launch_count",LAST);

	web_url("HomePage", 
		"URL={p_url}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	endTransaction(lr_eval_string("{Launch_count}"),"Expleo_Ecomm_001_Launch");
	
	lr_think_time(1);

		
	/* Login */
	
	lr_start_transaction("Expleo_Ecomm_002_Login");	

	web_url("index.php", 
		"URL={p_url}index.php?controller=my-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}index.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAyLjAuNTAwNS42MxIQCVhVc7pAH5kREgUNu1dWahIXCQKkWjC3SyRdEgUNg6hbPRIFDc5BTHoSEAnxYrEcwcwZFBIFDYOoWz0Yq6nKAQ==?alt=proto", "Referer=", ENDITEM, 
		LAST);
	
	
		/* SignIn2 */

			web_reg_save_param("c_token","LB=static_token\":\"","RB=\",",LAST);
			
		web_reg_find("Text=GDPR - Personal data","SaveCount=Login_count",LAST);
		
		web_submit_data("index.php_2", 
		"Action={p_url}index.php?controller=authentication&back=my-account", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}index.php?controller=authentication&back=my-account", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=back", "Value=my-account", ENDITEM, 
		"Name=email", "Value={UserID}", ENDITEM, 
		"Name=password", "Value={p_password}", ENDITEM, 
		"Name=submitLogin", "Value=1", ENDITEM, 
		LAST);
	
		endTransaction(lr_eval_string("{Login_count}"),"Expleo_Ecomm_002_Login");
	
		lr_think_time(1);
	
	return 0;
}
