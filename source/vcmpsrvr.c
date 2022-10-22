#include "PluginAPI.h"
#include <stdio.h> //For printing text on console
#include <time.h> //For printing time on console
#include <string.h> //For calculating length of 
#include <math.h> //For calculating distance between players
#define MAX_VEHICLES 1000
PluginFuncs* Server;
uint8_t fn_OnServerInitialise (void)
{
	Server->SetServerName("VC-MP Server 2022");
	Server->SetGameModeText("Friendly");
	Server->SetServerOption(vcmpServerOptionFriendlyFire, 0);
	Server->SetTimeRate(1000);
	printf("-----------------------------------------------\n");
	printf("	VCMP Server in C by habi, Banaqs (vehicles)		\n");
	printf("Scripted: 06 Jun 2022, 22 Oct 2022	\n");

	/*Create 5 classes*/
	//Tommy - 0, Meat cleaver-8, Colt- 17, Snipper rifle- 	28
	Server->AddPlayerClass(1, 0xFFFFFFFF, 0, -378.638, -563.656, 19.5742, -0.328948,
	28, 10,  17, 0, 8, 1);
	//Golf Skin - 164, Baseball bat-6, Python- 18, Laser snipper- 29
	Server->AddPlayerClass(2, 0xFFFF00FF, 164, -367.092, -563.838, 19.5742, -0.328948,
	29, 10, 6, 1, 18, 100 );
	//Cuban skin of tommy- 165, Katana-10, Shotgun-19, Grenade-12
	Server->AddPlayerClass(3, 0xFF00FFFF, 165, -388.706, -562.433, 19.5742, -0.328948,
	12, 10, 10, 1, 19, 50);

	/* Create 200 vehicles now */
	printf("Creating Vehicles ...");
	Server->CreateVehicle(130,0,-598.1232,622.5588,11.7840,1.604224,18,74);
Server->CreateVehicle(130,0,-598.6165,618.5028,11.7826,1.601955,18,74);
Server->CreateVehicle(166,0,-616.4828,651.4387,10.5840,6.085310,14,75);
Server->CreateVehicle(166,0,-611.2023,651.9318,10.5876,5.827294,14,75);
Server->CreateVehicle(166,0,-605.1564,652.4683,10.5843,5.931138,14,75);
Server->CreateVehicle(166,0,-591.1216,654.3730,10.5643,5.880977,14,75);
Server->CreateVehicle(166,0,-587.9245,654.5039,10.5844,5.877291,14,75);
Server->CreateVehicle(166,0,-582.4528,655.5148,10.5830,5.717658,14,75);
Server->CreateVehicle(193,0,-577.7695,650.5206,10.5597,0.218967,84,84);
Server->CreateVehicle(193,0,-596.3391,675.9069,10.7617,2.482380,7,7);
Server->CreateVehicle(156,0,-665.3930,805.4311,11.0370,3.136428,46,1);
Server->CreateVehicle(156,0,-665.3428,783.4216,11.0371,3.143043,46,1);
Server->CreateVehicle(193,0,-650.4547,754.2264,11.2033,4.656238,46,1);
Server->CreateVehicle(156,0,-639.0520,753.5862,11.2032,4.656260,46,1);
Server->CreateVehicle(156,0,-600.3902,807.4341,11.2114,4.604986,46,1);
Server->CreateVehicle(227,0,-614.1934,803.9073,29.6660,0.022108,46,1);
Server->CreateVehicle(210,0,-784.7332,672.1744,10.8495,1.56693,12,12);
Server->CreateVehicle(135,0,-768.0613,665.6818,10.9137,1.59731,2,0);
Server->CreateVehicle(210,0,-774.2057,995.6342,10.8461,4.732690,12,12);
Server->CreateVehicle(159,0,-752.8378,1003.8906,10.8649,6.281965,3,3);
Server->CreateVehicle(174,0,-780.7037,1026.5653,10.9394,1.54179,61,0);
Server->CreateVehicle(130,0,-650.2558,920.8828,11.1857,1.588286,18,74);
Server->CreateVehicle(137,0,-694.1721,926.0735,11.1955,4.692857,3,1);
Server->CreateVehicle(137,0,-751.7783,927.2592,11.2812,0.988816,3,1);
Server->CreateVehicle(145,0,-774.4608,977.6279,10.8241,3.150738,36,36);
Server->CreateVehicle(192,0,-803.5596,959.3724,10.6343,4.746670,68,78);
Server->CreateVehicle(192,0,-715.9547,1065.1605,10.5446,4.224042,68,78);
Server->CreateVehicle(191,0,-496.2343,1208.0430,7.0726,2.646224,22,22);
Server->CreateVehicle(191,0,525.3995,839.8240,11.1236,5.737632,38,38);
Server->CreateVehicle(191,0,-521.5993,838.3251,11.1270,5.704907,3,3);
Server->CreateVehicle(132,0,-392.5302,894.8767,10.6133,5.930377,6,6);
Server->CreateVehicle(132,0,-528.6176,1203.7877,7.2948,5.768903,10,10);
Server->CreateVehicle(191,0,-447.5215,1203.1743,9.2052,4.727273,2,2);
Server->CreateVehicle(174,0,-448.7614,1185.0378,9.5395,1.623908,41,0);
Server->CreateVehicle(149,0,-594.9833,1346.0950,11.5229,2.003726,47,76);
Server->CreateVehicle(191,0,-822.9012,1310.8057,11.1059,2.791252,2,2);
Server->CreateVehicle(234,0,-1476.8434,1047.7759,264.1451,3.7945203,-1,-1);
Server->CreateVehicle(234,0,-1347.2435,1055.6526,264.0510,2.727361,-1,-1);
Server->CreateVehicle(234,0,-1279.8364,993.2283,262.8954,1.574946,-1,-1);
Server->CreateVehicle(234,0,-1351.7225,934.1428,262.0353,0.2553765,-1,-1);
Server->CreateVehicle(234,0,-1515.2861,983.0940,263.1325,4.937265,-1,-1);
Server->CreateVehicle(198,0,-1346.5970,1448.2627,299.1477,5.617410,46,46);
Server->CreateVehicle(198,0,-1311.7345,1446.4861,298.8468,0.870467,46,46);
Server->CreateVehicle(198,0,-1323.5178,1439.1461,298.8476,0.171180,53,53);
Server->CreateVehicle(198,0,-1296.2511,1458.1401,298.8468,1.348197,53,53);
Server->CreateVehicle(198,0,-1417.2706,1531.3175,299.5493,4.627567,53,53);
Server->CreateVehicle(198,0,-1421.0701,1488.8687,302.1499,1.285188,53,53);
Server->CreateVehicle(217,0,-1127.0664,1511.9712,11.9682,6.243520,1,42);
Server->CreateVehicle(191,0,-1116.4395,1265.5247,8.2544,0.927202,48,48);
Server->CreateVehicle(173,0,-985.4117,1344.1613,11.7257,0.825900,93,77);
Server->CreateVehicle(201,0,-918.6592,1130.1572,10.9791,2.253989,13,13);
Server->CreateVehicle(146,0,-782.4065,1116.9678,10.0661,0.005900,1,3);
Server->CreateVehicle(146,0,-771.0571,1154.9764,12.6235,3.153871,1,3);
Server->CreateVehicle(132,0,-756.0136,1074.7358,9.2508,1.604821,35,35);
Server->CreateVehicle(191,0,96.4878,1090.1553,16.0475,3.691847,48,48);
Server->CreateVehicle(179,0,48.7824,1100.7084,17.2732,3.189283,16,74);
Server->CreateVehicle(179,0,-4.4181,1147.7140,19.4285,3.580762,16,74);
Server->CreateVehicle(179,0,18.5310,1140.2460,19.6552,2.177039,16,74);
Server->CreateVehicle(179,0,-25.5849,1120.4008,15.4932,3.391267,16,74);
Server->CreateVehicle(179,0,-25.4681,1100.8353,15.0815,4.916683,16,74);
Server->CreateVehicle(190,0,-142.0661,1022.3298,7.5074,0.148773,1,90);
Server->CreateVehicle(205,0,50.4374,1174.9293,20.6586,3.020114,41,29);
Server->CreateVehicle(205,0,21.0393,1007.0276,10.6893,6.060891,21,1);
Server->CreateVehicle(205,0,334.1074,1201.4971,17.1962,4.677571,33,0);
Server->CreateVehicle(204,0,395.3799,989.4377,12.1038,4.276103,17,17);
Server->CreateVehicle(132,0,287.0439,1037.1035,13.2244,0.195206,33,33);
Server->CreateVehicle(230,0,208.6151,1229.4574,17.4755,5.151361,48,65);
Server->CreateVehicle(230,0,-1106.8494,292.9714,12.3273,4.747180,48,65);
Server->CreateVehicle(216,0,-1002.6074,206.0241,11.4072,3.053128,6,76);
Server->CreateVehicle(138,0,-1261.3719,115.7242,12.0178,3.009928,1,75);
Server->CreateVehicle(205,0,-1107.2173,-198.0835,11.1751,1.57317,9,39);
Server->CreateVehicle(144,0,-1057.2069,-278.5889,11.3860,4.759090,67,67);
Server->CreateVehicle(158,0,-920.4551,-306.0597,13.5878,4.610884,4,75);
Server->CreateVehicle(144,0,-869.4409,-119.3127,11.1574,4.253157,69,69);
Server->CreateVehicle(144,0,-963.9122,-373.6888,11.3396,3.157379,91,91);
Server->CreateVehicle(206,0,-951.9403,-378.0401,10.9365,4.826037,61,39);
Server->CreateVehicle(206,0,-891.4566,-700.5800,10.9547,0.656563,61,39);
Server->CreateVehicle(236,0,-863.2736,-666.1580,11.0304,3.254967,3,3);
Server->CreateVehicle(236,0,-855.5962,-666.0559,10.9932,3.197654,7,7);
Server->CreateVehicle(236,0,-851.5004,-665.6548,10.9740,3.241867,76,76);
Server->CreateVehicle(236,0,-845.2188,-675.1938,10.9438,1.699095,6,6);
Server->CreateVehicle(236,0,-844.9042,-679.4929,10.9420,1.724898,52,52);
Server->CreateVehicle(175,0,-846.8568,-909.4408,10.9547,5.572759,42,42);
Server->CreateVehicle(141,0,-973.8217,-831.9473,6.4925,1.601782,11,11);
Server->CreateVehicle(132,0,-1017.5047,-861.6166,12.8358,3.717837,6,6);
Server->CreateVehicle(191,0,-1015.7603,-859.2327,17.4827,3.345241,22,22);
Server->CreateVehicle(191,0,-1019.6179,-858.1592,17.4810,3.21446,2,2);
Server->CreateVehicle(175,0,-979.8837,-1169.0863,14.7222,1.609786,53,53);
Server->CreateVehicle(144,0,-1008.8375,-1407.3828,11.8616,4.399873,3,3);
Server->CreateVehicle(191,0,-697.8029,-1522.6481,12.1532,1.20148,3,3);
Server->CreateVehicle(226,0,-731.2047,-1503.1404,11.2021,4.634611,12,1);
Server->CreateVehicle(226,0,-712.8604,-1553.9656,12.2736,6.154976,12,1);
Server->CreateVehicle(226,0,-720.9149,-1553.4470,12.2698,5.911548,12,1);
Server->CreateVehicle(226,0,-696.1869,-1502.0701,11.7049,6.248009,12,1);
Server->CreateVehicle(217,0,-686.5530,-1567.7709,12.5295,4.325573,1,57);
Server->CreateVehicle(223,0,-588.4979,-1511.8752,5.8423,4.41193,36,13);
Server->CreateVehicle(223,0,-583.6869,-1502.5627,5.7980,4.1978589,36,13);
Server->CreateVehicle(136,0,-389.6123,-1726.2853,6.7915,0.0538835,1,1);
Server->CreateVehicle(136,0,-397.6457,-1342.7911,6.6525,6.18983,1,1);
Server->CreateVehicle(223,0,-374.6611,-659.9583,5.6830,1.60162,36,13);
Server->CreateVehicle(214,0,-650.9855,-263.8465,6.7326,5.357251,50,32);
Server->CreateVehicle(136,0,-512.7714,-226.5067,6.7797,6.226394,1,1);
Server->CreateVehicle(136,0,-535.4413,-227.1720,6.6767,5.89484,1,1);
Server->CreateVehicle(190,0,-372.2652,-216.4774,7.3608,5.150251,1,35);
Server->CreateVehicle(190,0,604.7895,-1706.5129,7.5829,5.809131,1,60);
Server->CreateVehicle(190,0,583.6797,-1760.7828,7.2956,5.467455,1,46);
Server->CreateVehicle(190,0,603.4528,-1774.8110,7.4699,3.58624,1,14);
Server->CreateVehicle(190,0,-1259.0291,-1414.6964,7.4179,1.05688,1,50);
Server->CreateVehicle(160,0,-1199.0627,-1382.2418,5.6341,2.663142,46,1);
Server->CreateVehicle(160,0,-1213.4904,-1382.6627,5.5850,2.641992,46,1);
Server->CreateVehicle(132,0,-651.9755,-513.1553,10.1559,1.9402301,6,6);
Server->CreateVehicle(132,0,-355.9834,-530.7414,12.5118,0.022738,61,0);
Server->CreateVehicle(132,0,-362.5143,-528.3513,12.5124,0.043530,61,0);
Server->CreateVehicle(174,0,-393.3240,-523.2957,12.6169,6.219714,61,0);
Server->CreateVehicle(174,0,-398.3515,-520.8174,12.6268,6.2747204,61,0);
Server->CreateVehicle(174,0,-406.8978,-520.3749,12.6289,0.0625770,61,0);
Server->CreateVehicle(217,0,-391.8160,-573.8380,40.0296,4.716087,61,0);
Server->CreateVehicle(156,0,369.4720,-523.6241,12.1027,5.58454,46,1);
Server->CreateVehicle(156,0,352.9126,-509.6271,12.0988,5.597606,46,1);
Server->CreateVehicle(197,0,490.6163,-465.6109,10.6015,6.215325,58,8);
Server->CreateVehicle(197,0,358.8789,-813.7148,10.6016,2.742584,60,1);
Server->CreateVehicle(197,0,297.8174,-1056.8947,10.6017,6.176275,68,8);
Server->CreateVehicle(197,0,257.4348,-1189.7095,10.6012,2.949688,2,1);
Server->CreateVehicle(197,0,218.5240,-1389.0466,10.6013,2.908500,13,8);
Server->CreateVehicle(197,0,218.9929,-1445.1299,10.6016,5.937756,22,1);
Server->CreateVehicle(198,0,167.0211,-1504.3243,10.6981,3.405399,46,46);
Server->CreateVehicle(198,0,161.7691,-1505.6873,10.6334,4.540423,53,53);
Server->CreateVehicle(198,0,150.8547,-1525.2775,10.5850,3.657138,3,3);
Server->CreateVehicle(217,0,-71.3746,-1606.8180,12.1979,4.693223,1,42);
Server->CreateVehicle(191,0,-242.6452,-1347.8843,7.6379,5.020971,2,2);
Server->CreateVehicle(193,0,-254.7485,-1231.7388,7.6065,1.44635,84,84);
Server->CreateVehicle(210,0,-150.9673,-1427.3008,3.7353,5.012390,12,12);
Server->CreateVehicle(193,0,-159.8616,-1352.5422,9.9567,1.54177,84,84);
Server->CreateVehicle(209,0,-107.2975,-1204.9932,10.2545,5.482246,15,32);
Server->CreateVehicle(167,0,-5.2635,-1231.6711,10.5564,0.0528922,75,79);
Server->CreateVehicle(132,0,139.5816,-1104.4471,10.1935,1.5237178,10,10);
Server->CreateVehicle(191,0,125.3515,-1104.8690,9.9718,3.117185,3,3);
Server->CreateVehicle(209,0,55.1483,-1077.7474,10.2544,3.125839,15,32);
Server->CreateVehicle(191,0,-53.6150,-998.6633,9.9737,1.619686,48,48);
Server->CreateVehicle(198,0,-38.4061,-1015.3550,10.0968,6.282850,6,6);
Server->CreateVehicle(205,0,-9.5104,-992.9700,10.1978,6.188675,17,1);
Server->CreateVehicle(230,0,37.5689,-1003.9778,10.5291,4.73825,48,65);
Server->CreateVehicle(197,0,5.8889,-1015.4189,10.1626,6.281160,36,8);
Server->CreateVehicle(197,0,14.8831,-951.4145,21.4730,6.271194,36,8);
Server->CreateVehicle(191,0,-7.6970,-951.4760,21.2936,0.0372557,51,51);
Server->CreateVehicle(193,0,-8.3562,-927.7123,21.2671,3.171467,7,7);
Server->CreateVehicle(146,0,-118.7073,-922.1487,10.6754,1.7912663,1,3);
Server->CreateVehicle(146,0,-117.4189,-931.8056,10.6752,1.716564,1,3);
Server->CreateVehicle(205,0,273.2764,-873.0959,9.9347,1.096330,21,1);
Server->CreateVehicle(132,0,532.1689,-156.9969,13.3790,1.705797,33,33);
Server->CreateVehicle(145,0,475.0922,-42.7295,9.8901,6.246570,36,36);
Server->CreateVehicle(191,0,455.0826,-3.7197,10.4825,1.426902,13,13);
Server->CreateVehicle(174,0,525.0902,192.1835,14.3481,3.128258,11,0);
Server->CreateVehicle(174,0,297.6835,460.3541,9.9776,4.3561672,41,0);
Server->CreateVehicle(136,0,329.6919,578.8196,6.6500,0.000308,1,1);
Server->CreateVehicle(132,0,437.4555,539.0988,11.3912,6.062926,8,8);
Server->CreateVehicle(146,0,456.3506,718.7170,11.6164,4.655166,1,3);
Server->CreateVehicle(156,0,494.0573,503.6129,11.2556,3.186316,46,1);
Server->CreateVehicle(156,0,520.5809,502.5757,10.8520,3.085157,46,1);
Server->CreateVehicle(156,0,490.3658,521.4353,11.3487,1.55710,46,1);
Server->CreateVehicle(132,0,144.5919,-1148.9771,17.5309,3.12801,6,6);
Server->CreateVehicle(159,0,144.2603,-1230.6996,24.3226,0.012815,3,3);
Server->CreateVehicle(205,0,128.0492,-1177.0865,31.0443,0.039137,33,0);
Server->CreateVehicle(191,0,110.0135,-1148.5236,30.8348,6.281666,3,3);
Server->CreateVehicle(191,0,128.8416,-1216.1100,30.8201,6.268501,48,48);
Server->CreateVehicle(191,0,153.0231,-1209.5938,30.8359,2.880887,2,2);
Server->CreateVehicle(191,0,-1151.8125,-945.6403,14.3883,4.759830,38,38);
Server->CreateVehicle(205,0,-1132.1305,-926.5008,14.6029,4.716125,37,0);
Server->CreateVehicle(132,0,-1142.1732,-977.6573,14.6181,1.59912,10,10);
Server->CreateVehicle(193,0,-1142.2985,-1027.4420,14.3610,1.49554,84,84);
Server->CreateVehicle(145,0,-1152.0118,-1014.8665,14.6410,4.70583,36,36);
Server->CreateVehicle(218,0,-1369.5146,-1255.6322,18.1927,0.638874,1,2);
Server->CreateVehicle(145,0,-1681.8029,-645.2209,14.6583,6.282115,52,52);
Server->CreateVehicle(191,0,-1669.1388,-634.0207,14.4104,6.276165,38,38);
Server->CreateVehicle(191,0,-1627.2859,-623.5496,14.4104,2.996297,2,2);
Server->CreateVehicle(191,0,-1579.2931,-613.0315,14.3933,6.281542,3,3);
Server->CreateVehicle(200,0,-1747.2423,-269.6884,15.1117,4.661648,43,0);
Server->CreateVehicle(200,0,-1746.7196,-240.2867,15.1116,4.760092,43,0);
Server->CreateVehicle(200,0,-1746.7600,-225.4840,15.1116,4.671183,43,0);
Server->CreateVehicle(163,0,-1745.6432,-212.0730,15.2650,4.708725,43,0);
Server->CreateVehicle(163,0,-1704.9772,-215.9604,15.2650,3.139493,43,0);
Server->CreateVehicle(217,0,-1661.2036,-225.9702,14.8505,1.454175,40,44);
Server->CreateVehicle(153,0,-874.2407,-565.3093,11.1761,3.256211,1,56);
Server->CreateVehicle(147,0,-758.9777,821.3871,10.9881,3.149029,71,73);
Server->CreateVehicle(147,0,-770.6566,821.0764,10.9881,0.002469,71,73);
Server->CreateVehicle(147,0,-776.7801,820.0367,10.9877,6.268543,71,73);
Server->CreateVehicle(147,0,-788.3284,820.8813,10.9872,3.149200,71,73);
Server->CreateVehicle(147,0,-800.3445,820.1251,10.9879,6.254153,71,73);
Server->CreateVehicle(220,0,-829.3396,836.5057,11.1657,4.698918,6,6);
Server->CreateVehicle(220,0,-829.8462,830.3045,11.1665,4.746656,6,6);
Server->CreateVehicle(193,0,-800.0605,528.5693,10.4214,1.951868,84,84);
Server->CreateVehicle(191,0,-800.1152,523.4738,10.4470,1.897851,22,22);
Server->CreateVehicle(230,0,-824.5656,504.4783,10.9990,4.712671,48,65);
Server->CreateVehicle(207,0,-851.2013,552.4039,10.7816,0.019408,3,3);
Server->CreateVehicle(207,0,-869.1910,579.8416,10.7821,6.278413,2,2);
Server->CreateVehicle(145,0,-833.8428,565.5539,10.7017,3.123476,3,3);
Server->CreateVehicle(144,0,-840.0448,553.3810,10.9954,6.276944,67,67);
Server->CreateVehicle(187,0,97.7394,294.6339,19.0689,6.056688,2,1);
Server->CreateVehicle(187,0,102.0775,294.8427,19.2165,6.087574,5,1);
Server->CreateVehicle(187,0,106.5904,295.8557,19.3699,5.922165,18,1);
printf("Done\n");short wVehicleCount=0;
for(int i=1; i<MAX_VEHICLES;i++)
	if(Server->CheckEntityExists(vcmpEntityPoolVehicle, i))
		wVehicleCount++;
printf("Loaded %d vehicles\n", wVehicleCount);
	printf("Commands: /veh /wthr /sttime /fix /flip\n");
	printf("Commands (type 2): /heal\n");
	printf("Commands: /credits /cmds\n");
	printf("-----------------------------------------------\n");
	
	return 1;
}
uint8_t fn_OnPlayerMessage(int32_t playerId, const char* message)
{
	char* name = (char*)malloc(256);
	if(name)
	{
		vcmpError e=Server->GetPlayerName(playerId, name, 256);
		if (e==0)
		{
			printf("[%u] %s: %s\n", playerId, name, message);
		}
		free(name);
	}
	return 1;
}
void fn_OnPlayerConnect (int32_t playerId)
{
	/* Credits: zishan, stackoverflow for time function*/
	time_t mytime = time(NULL);
	char* time_str = ctime(&mytime);
	time_str[strlen(time_str) - 1] = '\0';

	char* name = (char*)malloc(256);
	if(name)
	{
		vcmpError e = Server->GetPlayerName(playerId, name, 256);
		if (e == 0)
		{
			char buffer[256];
			int n = sprintf(buffer, "[%s] [%u] [%s] connected.", time_str, playerId, name);
			if (n > 0)
			{
				Server->LogMessage(buffer);
			}
		}
		free(name);
	}
}
void fn_OnPlayerDisconnect (int32_t playerId, vcmpDisconnectReason reason)
{
	/* Credits: zishan, stackoverflow for time function */
	time_t mytime = time(NULL);
	char* time_str = ctime(&mytime);
	time_str[strlen(time_str) - 1] = '\0';

	char buffer[256];
	int n=sprintf(buffer, "[%s] [%u] disconnected.", time_str, playerId);
	if (n > 0)
	{
		Server->LogMessage(buffer);
	}
}

uint8_t fn_OnPlayerCommand(int32_t playerId, const char* message)
{
	int idx=0;
	char* text=(char*)malloc(strlen(message)+1);
	if(text)
	{
		strcpy(text, message);
		char* cmd;
		cmd=strtok(text, " ");
		if(!cmd)return 1;
		if(strcmp(cmd, "credits")==0)
		{
			Server->SendClientMessage(playerId,0xFFFFFFFF,"Credits: habi, Banaqs (2014) for 200 vehicles");
		}else if(strcmp(cmd, "cmds")==0)
		{
			Server->SendClientMessage(playerId, 0xFFFFFFFF, "/veh /wthr /sttime /fix /flip /heal /credits");
		}else if(strcmp(cmd, "fix")==0)
		{
			int vehicleId=Server->GetPlayerVehicleId(playerId);
			if(vehicleId)
			{
				Server->SetVehicleHealth(vehicleId, 1000.0);
				Server->SetVehicleDamageData(vehicleId, 0);
				Server->SendClientMessage(playerId, 0xFFFFFFFF, "Fixed");
			}else printf("You must be in a vehicle to use this command.\n");
		}else if(strcmp(cmd, "flip")==0)
		{
			int vehicleId=Server->GetPlayerVehicleId(playerId);
			if(vehicleId)
			{
				float x, y, z;
				Server->GetVehiclePosition(vehicleId, &x, &y, &z);
				Server->SetVehiclePosition(vehicleId, x, y, z, 0);
				Server->SendClientMessage(playerId, 0xFFFFFFFF, "Flipped");
			}else printf("You must be in a vehicle to use this command.\n");
		}else if(strcmp(cmd, "wthr")==0)
		{
			char* arg=strtok(NULL," ");
			char* pEnd;
			if(arg)
			{
				int id=(int)strtol(arg,&pEnd, 0);
				if(id || id==0 &&strcmp(pEnd,"")==0)
				{
					Server->SetWeather(id);
					for(int i=0;i<Server->GetMaxPlayers();i++)
					{
						if(i==playerId)continue;
						if(Server->IsPlayerConnected(i))
						{
							if(Server->IsPlayerSpawned(i))
							{
								Server->SendClientMessage(i, 0xFFFFFFFF,"Weather changed!");
							}
						}
					}
				}
			}else Server->SendClientMessage(playerId, 0xFFFFFFFF, "Use: /wthr id");
		}else if(strcmp(cmd, "sttime")==0)
		{
			char* hour=strtok(NULL, " ");
			char* min=strtok(NULL, " ");
			if(hour && min)
			{
				char* pEnd;int s=0;
				int ihour=(int)strtol(hour,&pEnd, 0);
				if(ihour || strcmp(pEnd, "")==0)
				{
					int imin=(int)strtol(min, &pEnd, 0);
					if(imin || strcmp(pEnd,"")==0)
					{
						Server->SetHour(ihour);
						Server->SetMinute(imin);
						s=1;
					}
				}
				if(!s)Server->SendClientMessage(playerId, 0xFFFFFFFF, "Error, use /settime hr min");
			}else Server->SendClientMessage(playerId, 0xFFFFFFFF, "Use: /sttime hr min");
		}else if(strcmp(cmd, "heal")==0)
		{
			if(!Server->IsPlayerSpawned(playerId))
				return 1;
			float x, y, z;
			Server->GetPlayerPosition(playerId, &x, &y, &z);
			float p, q, r;
			int closestplayerId=-1;float smallestdistance=2;
			for(int i=0;i<Server->GetMaxPlayers();i++)
			{
				if(i==playerId)
					continue;
				if(Server->IsPlayerConnected(i))
				{
					if(Server->IsPlayerSpawned(i))
					{
						Server->GetPlayerPosition(i,&p,&q,&r);
						float distance=sqrt(pow(x-p,2)+pow(y-q,2)+pow(z-r,2));
						if(distance<smallestdistance)
						{
							closestplayerId=i;
							smallestdistance=distance;
						}
					}
				}
			}
			if(closestplayerId!=-1)
			{
				if(Server->GetPlayerHealth(closestplayerId)<100)
				{
					Server->SetPlayerHealth(closestplayerId, 100.0);
					Server->SendClientMessage(closestplayerId, 0xFFFFFFFF, "You have been healed.");
				}
			}else 
				Server->SendClientMessage(playerId, 0xFFFFFFFF,"You must be near a player to heal him/her.");
		}else if(strcmp(cmd, "veh")==0)
		{
			if(!Server->IsPlayerSpawned(playerId))
				return 1;
			char* arg=strtok(NULL," ");
			if(arg)
			{
				char* pEnd;
				short wVehicleId=(int)strtol(arg,&pEnd, 0);
				if(wVehicleId)
				{
					if(Server->CheckEntityExists(vcmpEntityPoolVehicle, wVehicleId))
					{
						int iSomePlayerId=Server->GetVehicleOccupant(wVehicleId, 0);
						if(iSomePlayerId==255)
						{
							float x,y,z;
							Server->GetPlayerPosition(playerId, &x, &y, &z);
							Server->SetVehiclePosition(wVehicleId, x, y, z,0);
							Server->PutPlayerInVehicle(playerId,wVehicleId, 0, 0,1);
						}
						return 1;
					}
				}
				Server->SendClientMessage(playerId, 0xFFFFFFFF, "Error: Invalid vehicle id");
			}else Server->SendClientMessage(playerId, 0xFFFFFFFF, "Usage: /veh id");
		}else Server->SendClientMessage(playerId, 0xFFFFFFFF, "error");
		free(text);
	}
	return 1;
}
unsigned int VcmpPluginInit(PluginFuncs* pluginFuncs, PluginCallbacks* pluginCallbacks, PluginInfo* pluginInfo) {
	if(!pluginFuncs)return 1;//Precaution
	
	Server=pluginFuncs;
	// Plugin information
	pluginInfo->pluginVersion = 0x1;
	pluginInfo->apiMajorVersion = PLUGIN_API_MAJOR;
	pluginInfo->apiMinorVersion = PLUGIN_API_MINOR;
	
	pluginCallbacks->OnServerInitialise = fn_OnServerInitialise;
	pluginCallbacks->OnPlayerMessage = fn_OnPlayerMessage;
	pluginCallbacks->OnPlayerConnect = fn_OnPlayerConnect;
	pluginCallbacks->OnPlayerDisconnect = fn_OnPlayerDisconnect;
	pluginCallbacks->OnPlayerCommand=fn_OnPlayerCommand;
	return 1;
}