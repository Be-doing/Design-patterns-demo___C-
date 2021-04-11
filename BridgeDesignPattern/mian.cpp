/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/11
 **************************************************************/

#include "DPMobile.h"
#include "DPApplication.h"


int main() {
	DPAbstractApplication* baidu = new DPBaiduApplication("百度");

	DPAbstractMobile* miMobile = new DPMiMobile();
	miMobile->installApp(baidu);
	miMobile->runApp(baidu);


	DPAbstractMobile* hwMobile = new DPHuaweiMobile();
	hwMobile->installApp(baidu);
	hwMobile->runApp(baidu);


	DPAbstractApplication* tiktok = new DPTiktokApplication("抖音");
	hwMobile->runApp(tiktok);
	return 0;
}