/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/28
 **************************************************************/
#pragma once
//class DPPhone;
#include "DPHuaWeiPhone.h"
#include "DPMiPhone.h"
#include "DPOppoPhone.h"
enum class DPPhoneBrand {
	DPPhoneBrandMi,
	DPPhoneBrandHuaWei,
	DPPhoneBrandOppo
};

class DPPhoneFactory {
public:
	static DPPhone* getPhoneWithBrand(DPPhoneBrand brand);
};
