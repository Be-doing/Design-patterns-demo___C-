/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/28
 **************************************************************/

#include "DPPhoneFactory.h"

DPPhone* DPPhoneFactory::getPhoneWithBrand(DPPhoneBrand brand) {
	switch (brand) {
	case DPPhoneBrand::DPPhoneBrandHuaWei:
		return new DPHuaWeiPhone();
	case DPPhoneBrand::DPPhoneBrandMi:
		return new DPMiPhone();
	case DPPhoneBrand::DPPhoneBrandOppo:
		return new DPOppoPhone();
	default:
		return nullptr;
	}
}