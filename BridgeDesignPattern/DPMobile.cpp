/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/11
 **************************************************************/
#include "DPMobile.h"
void DPMiMobile::installApp(DPAbstractApplication* app) {
	if (_appList[app]) {
		std::cout << "小米已经安装该APP" << std::endl;
		return;
	}
	_appList.insert(std::make_pair(app,1));
}

void DPMiMobile::runApp(DPAbstractApplication* app) {
	if (_appList.find(app) != _appList.end()) {
		std::cout << "小米手机上";
		app->Run();
		return;
	}
	std::cout << "未找到该APP" << std::endl;
}

void DPHuaweiMobile::installApp(DPAbstractApplication* app) {
	if (_appList[app]) {
		std::cout << "华为手机已经安装该APP" << std::endl;
		return;
	}
	_appList.insert(std::make_pair(app, 1));
}

void DPHuaweiMobile::runApp(DPAbstractApplication* app) {
	if (_appList.find(app) != _appList.end()) {
		std::cout << "华为手机上";
		app->Run();
		return;
	}
	std::cout << "未找到该APP" << std::endl;
}