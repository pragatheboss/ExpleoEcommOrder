CreateOrder()
{

	int rc,i;
	
	char temp[25];
	
	/* Search {p_searchItem} */
	
	lr_start_transaction("Expleo_Ecomm_100_Search");	

	/* Search */

	web_submit_data("index.php_3", 
		"Action={p_url}index.php?controller=search", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_url}index.php?controller=my-account", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=s", "Value={p_searchItem}", ENDITEM, 
		"Name=resultsPerPage", "Value=10", ENDITEM, 
		LAST);

	web_reg_find("Text=Sort by","SaveCount=Search_count",LAST);
	
	//web_reg_save_param("c_productID","LB=?id_product=","RB=&amp;rewrite=","ORD=ALL",LAST);		
		
	web_reg_save_param_regexp(
		"ParamName=c_productID",
		"RegExp=id_product=(.*?)&amp;rewrite=(.*?);controller=",
		"Group=1",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		LAST);
	
	web_url("index.php_4", 
		"URL={p_url}index.php?controller=search&s={p_searchItem}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}index.php?controller=my-account", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	endTransaction(lr_eval_string("{Search_count}"),"Expleo_Ecomm_100_Search");
	
	lr_think_time(1);
	
	rc = atoi(lr_eval_string("{c_productID_count}"));
	
	i=rand()%rc+1;
	
	i=2;
		
	sprintf(temp,"{c_productID_%d}",i);
	
	lr_save_string(lr_eval_string(temp),"c_productID");
	
		
	lr_start_transaction("Expleo_Ecomm_101_AddToCart");
	
	web_reg_find("Text=id_product={c_productID}","SaveCount=AddToCart_count",LAST);

	/* Select 1 */

	web_url("Hummingbird printed sweater", 
		"URL={p_url}index.php?id_product={c_productID}&rewrite=brown-bear-printed-sweater&controller=product&id_lang=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}index.php?controller=search&s=HUMMINGBIRD+PRINTED+SWEATER", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		/*"Url=/themes/classic/assets/css/082a71677e756fb75817e8f262a07cb4.svg", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/8b05d51ede908907d65695558974d86f.svg", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/e049aeb07a2ae1627933e8e58d3886d2.svg", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/ffddcb3736980b23405b31142a324b62.svg", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/c1a65805f759901a39d10eb854c1dcf2.svg", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/3a2aeeba930cc29e4d31ebfa1b7cdaa2.svg", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/b1db819132e64a3e01911a1413c33acf.svg", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/99db8adec61e4fcf5586e1afa549b432.svg", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, */
		LAST);

	/* Add to Cart */

	web_submit_data("index.php_5", 
		"Action={p_url}index.php?controller=cart", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		//"Referer={p_url}index.php?id_product=2&rewrite=brown-bear-printed-sweater&controller=product&id_lang=1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=token", "Value={c_token}", ENDITEM, 
		"Name=id_product", "Value={c_productID}", ENDITEM,
		"Name=id_customization", "Value=0", ENDITEM, 
		"Name=group[1]", "Value=1", ENDITEM, 
		"Name=qty", "Value=1", ENDITEM, 
		"Name=add", "Value=1", ENDITEM, 
		"Name=action", "Value=update", ENDITEM, 
		LAST);
	
	web_submit_data("index.php_6", 
		"Action={p_url}index.php?fc=module&module=ps_shoppingcart&controller=ajax&id_lang=1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer={p_url}index.php?id_product=2&rewrite=brown-bear-printed-sweater&controller=product&id_lang=1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		//"Name=id_product_attribute", "Value=9", ENDITEM, 
		"Name=id_product", "Value={c_productID}", ENDITEM, 
		"Name=action", "Value=add-to-cart", ENDITEM, 
		LAST);

		endTransaction(lr_eval_string("{AddToCart_count}"),"Expleo_Ecomm_101_AddToCart");
	
		lr_think_time(1);
	
	/* Proeed to Chek out */

	lr_start_transaction("Expleo_Ecomm_102_ProceedtoCheckout");

	web_url("index.php_7", 
		"URL={p_url}index.php?controller=cart&action=show", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		//"Referer={p_url}index.php?id_product=2&rewrite=brown-bear-printed-sweater&controller=product&id_lang=1", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		/*"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTAyLjAuNTAwNS42MxopCAUQARobCg0IBRAGGAEiAzAwMTABEKfxDRoCGAPoo5nJIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCM4QoaAhgD7-G94yIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ2KULGgIYA0fCihUiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgDWbx0fSIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQtygaAhgD_SolACIEIAEgAigEGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ43EaAhgDzKf05CIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGAN3Vzc4IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAgGgIYA0QGrjMiBCABIAIoARooCAgQARoaCg"
		"0ICBAGGAEiAzAwMTABENgPGgIYAxdn1BwiBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEJu9ARoCGANFqBcpIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARDXsgoaAhgD9MgMXCIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQ_bgGGgIYA-3XvAsiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEJASGgIYA6O43-UiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, */
		LAST);

	/* Proceed to ChekOut */

	/* Proceed to chek out 2  */
	
	//web_reg_find("Text=Continue","SaveCount=ProceedtoCheckout_count",LAST);

	web_url("Proceed to checkout", 
		"URL={p_url}index.php?controller=order", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={p_url}index.php?controller=cart&action=show", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	//endTransaction(lr_eval_string("ProceedtoCheckout"),"Expleo_Ecomm_102_ProceedtoCheckout");
	
	lr_end_transaction("Expleo_Ecomm_102_ProceedtoCheckout",LR_PASS);
	
	lr_think_time(1);
	

	/* Click Continue */
	
	lr_start_transaction("Expleo_Ecomm_103_Address");
	
	web_reg_find("Text=Product successfully added to your shopping cart","SaveCount=Address_count",LAST);
	

	web_submit_data("index.php_8", 
		"Action={p_url}index.php?controller=order", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}index.php?controller=order", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id_address_delivery", "Value=720", ENDITEM, 
		"Name=confirm-addresses", "Value=1", ENDITEM, 
		LAST);
	
	//endTransaction(lr_eval_string("{Address_count}"),"Expleo_Ecomm_103_Address");
	
	lr_end_transaction("Expleo_Ecomm_103_Address",LR_PASS);
	
	lr_think_time(1);
	

	/* Select Training Presta */

	/* Continue */
	
	lr_start_transaction("Expleo_Ecomm_104_PlaceOrder");
	
	web_reg_find("Text=Product successfully added to your shopping cart","SaveCount=PlaceOrder_count",LAST);

	web_submit_data("index.php_9", 
		"Action={p_url}index.php?controller=order", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}index.php?controller=order", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=delivery_option[720]", "Value=1,", ENDITEM, 
		"Name=delivery_message", "Value=", ENDITEM, 
		"Name=confirmDeliveryOption", "Value=1", ENDITEM, 
		LAST);
	


	/* Pay By Ban Wire , I agree */

	/* Agree */

	/* Order with Obligation */

	web_submit_data("index.php_10", 
		"Action={p_url}index.php?fc=module&module=ps_wirepayment&controller=validation&id_lang=1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={p_url}index.php?controller=order", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		EXTRARES, 
		"Url=/themes/classic/assets/css/7a3ebca0cba2e2c6090e84e1d77e0f94.woff2", "Referer={p_url}themes/classic/assets/css/theme.css", ENDITEM, 
		LAST);
	
	//endTransaction(lr_eval_string("{PlaceOrder_count}"),"Expleo_Ecomm_104_PlaceOrder");
	
	lr_end_transaction("Expleo_Ecomm_104_PlaceOrder",LR_PASS);
	
	lr_think_time(1);

	return 0;
}