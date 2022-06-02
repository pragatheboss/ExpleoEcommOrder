Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com", 
		"URL=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=102", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/19c1b868764c0e4d15a45d3f61250488.woff2", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/570eb83859dc23dd0eec423a49e147fe.woff2", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/199038f07312bfc6f0aabd3ed6a2b64d.woff2", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/js/jquery/ui/themes/base/minified/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/js/jquery/ui/themes/base/minified/jquery.ui.theme.min.css", ENDITEM, 
		"Url=http://192.168.1.121:8008/ssdp/device-desc.xml", "Referer=", ENDITEM, 
		"Url=http://192.168.1.73:60000/upnp/dev/00e91b8d-743c-3912-a302-2d1eb6bf14a6/desc", "Referer=", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAyLjAuNTAwNS42MxIQCVhVc7pAH5kREgUNu1dWahIQCfFisRzBzBkUEgUNg6hbPRirqcoB?alt=proto", "Referer=", ENDITEM, 
		LAST);

	/* Login */

	web_url("index.php", 
		"URL=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=my-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAyLjAuNTAwNS42MxIQCVhVc7pAH5kREgUNu1dWahIXCQKkWjC3SyRdEgUNg6hbPRIFDc5BTHoSEAnxYrEcwcwZFBIFDYOoWz0Yq6nKAQ==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	/* SignIn2 */

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:uE-p12mmDdW2c1ZD11EwmlrQsQGA6UVjnm9W6f9GsHw&cup2hreq=502c51a07d2fb27649517f64b43a2d5f1ca0ec83031136c6736a833ab1008ecf", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"RXQR\",\"cohort\":\"1:15j3:\",\"cohorthint\":\"Win (Including up-to-date)\",\"cohortname\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{180e4107-4ba7-4b6b-b539-f986c7134c0c}\",\"rd\""
		":5631},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"ping_freshness\":\"{7c614256-cb80-4aeb-ba8b-554a94b51a0c}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{7c107d94-38d0-4490-9eea-c506a1e0252f}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"RXQR\",\"cohort\":\"1:bm1/15rx:\",\"cohorthint\":\"HundredPercent\",\"cohortname\":\"HundredPercent\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.34ff2e9d7a7ce81c5d760d4b0f4b59a0237dd5db0d1e84ccd5103a30687eac17\"}]},\"ping\":{\"ping_freshness\":\"{6ab3f3b9-efe8-4a3b-a63a-ababb41ad331}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"9.36.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"RXQR\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.75c0917aea02e762102b43e49839262173b6c531e85d03459493d680213755b5\"}]},\"ping\":{\"ping_freshness\":\"{0c5a5791-22bb-464a-8354-92f17c088372}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"20220409.440702358\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"RXQR\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.1fda588585c04ecae5db97ffb37a379784e72ae84984f53e0e17a7a4d883e616\"}]},\"ping\""
		":{\"ping_freshness\":\"{b921ba44-081d-419d-b501-71bd20699448}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"334\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"RXQR\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{23f8a261-2f12-4645-86c2-929e8aa5ea75}\",\"rd\":5631},\"updatecheck\":{}"
		",\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"RXQR\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2c15227a2823f31c7f3728e85a39bd87040d30562f3fa8d1c6faeb20f93e3cc8\"}]},\"ping\":{\"ping_freshness\":\"{72a33600-2fef-40fe-9a03-114ee31da58c}\",\"rd\":5631},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"50\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand"
		"\":\"RXQR\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}]},\"ping\":{\"ping_freshness\":\"{a193e409-3cd7-4c58-939a-c08a2271ab10}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"RXQR\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\""
		"package\":[{\"fp\":\"1.2c84f913ee7f663aff4b94b02233cc9de426fb824d13a0a3aa9296fd9140329e\"}]},\"ping\":{\"ping_freshness\":\"{46042639-c255-4b9b-911c-2c70d1a7be44}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"7374\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"RXQR\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8d72c1be146d9732d4e14426908065214a0c673fd14d166d9eb1dc8780920158\"}"
		"]},\"ping\":{\"ping_freshness\":\"{f68db22f-39d5-4802-878c-874dc281b9c0}\",\"rd\":5631},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"100.282.200\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"RXQR\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.29661be65c8fb50d3d4df2fe040a1cc6dd525f50a95850aae6a191301c3de744\"}]},\"ping\":{\"ping_freshness\":\""
		"{f740dd66-06b2-419a-b9f2-1f183e85dd6b}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"RXQR\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{79cad59a-db83-438c-936f-cdbf30d513c4}\",\"rd\":5631},\"updatecheck\":{},"
		"\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"RXQR\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.a85214339c6c887747f312c233fe6866ee88888f8f02555c174008b8a19b7eaa\"}]},\"ping\":{\"ping_freshness\":\"{65ecd87d-3d75-46d8-8812-c2cf7eceefa3}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"2824\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"RXQR\""
		",\"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f0807b94ce55989abafd76b13b77583b26dfeae3251c7af920a23a2e5873e6fa\"}]},\"ping\":{\"ping_freshness\":\"{77174139-67df-4e2e-a243-65079a4414e7}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"250\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"RXQR\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80AndAbove\",\"enabled"
		"\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.9c52ae87b64a91c37be31d915c35b9c2a98be728663f4ba4d4048c1ab56a17f3\"}]},\"ping\":{\"ping_freshness\":\"{290ae32e-3df0-4231-a877-df6cb61e4e3f}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"2022.5.23.1144\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"RXQR\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.999ffa8fa5ba90f5b5704a31c564a25508d570c008ab70275bd6b3f072a17472\"}]},\"ping\":{\"ping_freshness\":\"{c3745e10-a5fd-4366-87ec-3ce4e01f682f}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"104.0.5098.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"RXQR\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\""
		"ping_freshness\":\"{523c0b55-dd1b-4356-992d-b64507386658}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"RXQR\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0c24e9bd976adffa987e08fc54dc0950c84cf18f9cdb4c5caabc6acf24887c4f\"}]},\"ping\":{\"ping_freshness\":\"{64a82ed7-0db8-4afd-ad38-476559acc816}\",\"rd\":5631},\"updatecheck\":{},\""
		"version\":\"20220505\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"RXQR\",\"cohort\":\"1:148r:\",\"cohorthint\":\"desktop_1\",\"cohortname\":\"desktop_1\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.76cb54d84f715b259838febfeebb6945276631967e6f9a2de107f6b5602f8d56\"}]},\"ping\":{\"ping_freshness\":\"{aba07b8c-8d78-464f-b7d3-c4705d005c1d}\",\"rd\":5631},\"tag\":\"desktop_1\",\"updatecheck\":{},\"version\":\"29.3\"},{\"appid\":\""
		"dnhnnofocefcglhjeigmkhcgfoaipbaa\",\"brand\":\"RXQR\",\"cohort\":\"1:14w3:\",\"cohorthint\":\"Default list \",\"cohortname\":\"Default list \",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.99b9135efef548415566845e4045e9e6ff35201620230887ab684638970f5285\"}]},\"ping\":{\"ping_freshness\":\"{3f11f77f-53c8-4ed9-94ef-0f50091a5ba8}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"2022.4.13.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"RXQR\",\"cohort\":\"1"
		":w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{f0194422-94fd-44b3-a0cc-3083ab5a285b}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"_v2_format_plz\":\"true\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"RXQR\",\"cohort\":\"1:z1x:\",\""
		"cohorthint\":\"General release\",\"cohortname\":\"General release\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{4f5dc03a-862c-472f-b8cc-6938d9ccc8b5}\",\"rd\":5631},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":7,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\""
		"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.675\"},\"prodversion\":\"102.0.5005.63\",\"protocol\":\"3.1\",\"requestid\":\"{0eebe441-4657-4fa3-b124-74024417dd8f}\",\"sessionid\":\"{dd4dda7d-b5d1-4a83-8baf-8c469fdd7fa8}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.132\"},\""
		"updaterversion\":\"102.0.5005.63\"}}", 
		LAST);

	web_submit_data("index.php_2", 
		"Action=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=authentication&back=my-account", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=authentication&back=my-account", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=back", "Value=my-account", ENDITEM, 
		"Name=email", "Value=pragatheboss@gmail.com", ENDITEM, 
		"Name=password", "Value=Shivaji99#", ENDITEM, 
		"Name=submitLogin", "Value=1", ENDITEM, 
		LAST);

	/* Search */

	lr_think_time(11);

	web_submit_data("index.php_3", 
		"Action=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=search", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=my-account", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=s", "Value=HUMMINGBIRD PRINTED SWEATER", ENDITEM, 
		"Name=resultsPerPage", "Value=10", ENDITEM, 
		LAST);

	web_url("index.php_4", 
		"URL=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=search&s=HUMMINGBIRD+PRINTED+SWEATER", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=my-account", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	/* Select 1 */

	lr_think_time(24);

	web_url("Hummingbird printed sweater", 
		"URL=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?id_product=2&rewrite=brown-bear-printed-sweater&controller=product&id_lang=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=search&s=HUMMINGBIRD+PRINTED+SWEATER", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/themes/classic/assets/css/082a71677e756fb75817e8f262a07cb4.svg", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/8b05d51ede908907d65695558974d86f.svg", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/e049aeb07a2ae1627933e8e58d3886d2.svg", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/ffddcb3736980b23405b31142a324b62.svg", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/c1a65805f759901a39d10eb854c1dcf2.svg", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/3a2aeeba930cc29e4d31ebfa1b7cdaa2.svg", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/b1db819132e64a3e01911a1413c33acf.svg", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		"Url=/themes/classic/assets/css/99db8adec61e4fcf5586e1afa549b432.svg", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		LAST);

	/* Add to Cart */

	lr_think_time(7);

	web_submit_data("index.php_5", 
		"Action=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=cart", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?id_product=2&rewrite=brown-bear-printed-sweater&controller=product&id_lang=1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=token", "Value=396bbf24094f2007982d1554f7350c6d", ENDITEM, 
		"Name=id_product", "Value=2", ENDITEM, 
		"Name=id_customization", "Value=0", ENDITEM, 
		"Name=group[1]", "Value=1", ENDITEM, 
		"Name=qty", "Value=1", ENDITEM, 
		"Name=add", "Value=1", ENDITEM, 
		"Name=action", "Value=update", ENDITEM, 
		LAST);

	web_submit_data("index.php_6", 
		"Action=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?fc=module&module=ps_shoppingcart&controller=ajax&id_lang=1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?id_product=2&rewrite=brown-bear-printed-sweater&controller=product&id_lang=1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id_product_attribute", "Value=9", ENDITEM, 
		"Name=id_product", "Value=2", ENDITEM, 
		"Name=action", "Value=add-to-cart", ENDITEM, 
		LAST);

	/* Proeed to Chek out */

	lr_think_time(8);

	web_url("index.php_7", 
		"URL=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=cart&action=show", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?id_product=2&rewrite=brown-bear-printed-sweater&controller=product&id_lang=1", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTAyLjAuNTAwNS42MxopCAUQARobCg0IBRAGGAEiAzAwMTABEKfxDRoCGAPoo5nJIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCM4QoaAhgD7-G94yIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ2KULGgIYA0fCihUiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgDWbx0fSIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQtygaAhgD_SolACIEIAEgAigEGigIDxABGhoKDQgPEAYYASIDMDAxMAEQ43EaAhgDzKf05CIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGAN3Vzc4IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAgGgIYA0QGrjMiBCABIAIoARooCAgQARoaCg"
		"0ICBAGGAEiAzAwMTABENgPGgIYAxdn1BwiBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEJu9ARoCGANFqBcpIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARDXsgoaAhgD9MgMXCIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQ_bgGGgIYA-3XvAsiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEJASGgIYA6O43-UiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	/* Proceed to ChekOut */

	/* Proceed to chek out 2  */

	lr_think_time(18);

	web_url("Proceed to checkout", 
		"URL=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=order", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=cart&action=show", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Continue */

	web_submit_data("index.php_8", 
		"Action=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=order", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=order", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id_address_delivery", "Value=720", ENDITEM, 
		"Name=confirm-addresses", "Value=1", ENDITEM, 
		LAST);

	/* Select Training Presta */

	/* Continue */

	web_submit_data("index.php_9", 
		"Action=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=order", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=order", 
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
		"Action=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?fc=module&module=ps_wirepayment&controller=validation&id_lang=1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/index.php?controller=order", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		EXTRARES, 
		"Url=/themes/classic/assets/css/7a3ebca0cba2e2c6090e84e1d77e0f94.woff2", "Referer=http://prestashop-dublin-production-658025956.eu-west-1.elb.amazonaws.com/themes/classic/assets/css/theme.css", ENDITEM, 
		LAST);

	return 0;
}