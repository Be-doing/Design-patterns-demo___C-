/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/29
 **************************************************************/
#include "DPFactory.h"
DPAbstractPhone* DPMiFactory::getPhone() {
	return new DPMiPhone();
}

DPAbstractRouter* DPMiFactory::getRouter() {
	return new DPMiRouter();
}
 
DPAbstractPhone* DPHuaWeiFactory::getPhone() {
	return new DPHuaWeiPhone();
}

DPAbstractRouter* DPHuaWeiFactory::getRouter() {
	return new DPHuaWeiRouter();
}

