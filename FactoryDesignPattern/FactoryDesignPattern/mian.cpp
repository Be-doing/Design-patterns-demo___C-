/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 
 **************************************************************/
#include "DPPhoneFactory.h"

int main() {
	DPPhone* miPhone = DPPhoneFactory::getPhoneWithBrand(DPPhoneBrand::DPPhoneBrandMi);
	if (miPhone) {
		miPhone->messageFunction();
	}
	DPPhone* hwPhone = DPPhoneFactory::getPhoneWithBrand(DPPhoneBrand::DPPhoneBrandHuaWei);
	if (hwPhone) {
		hwPhone->wechatFunction();
	}
	return 0;
}