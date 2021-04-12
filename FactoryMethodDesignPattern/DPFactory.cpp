/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/12
 **************************************************************/
#include "DPFactory.h"
#include "DPHuaWeiPhone.h"
#include "DPMiPhone.h"
#include "DPOppoPhone.h"


DPPhone* DPMiPhoneFactory::getPhone() {
	return new DPMiPhone();
}

DPPhone* DPHuaWeiPhoneFactory::getPhone() {
	return new DPHuaWeiPhone();
}

DPPhone* DPOppoPhoneFactory::getPhone() {
	return new DPOppoPhone();
}