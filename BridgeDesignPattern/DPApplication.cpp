/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/11
 **************************************************************/
#include "DPApplication.h"
DPBaiduApplication::DPBaiduApplication(std::string appName)
	:DPAbstractApplication(appName){	
}
void DPBaiduApplication::Run() {
	std::cout << _appName + "在运行" << std::endl;
}

DPTiktokApplication::DPTiktokApplication(std::string appName)
	:DPAbstractApplication(appName) {
}
void DPTiktokApplication::Run() {
	std::cout << _appName + "在运行" << std::endl;
}

DPWeChatApplication::DPWeChatApplication(std::string appName)
	:DPAbstractApplication(appName) {
}
void DPWeChatApplication::Run() {
	std::cout << _appName + "在运行" << std::endl;
}
