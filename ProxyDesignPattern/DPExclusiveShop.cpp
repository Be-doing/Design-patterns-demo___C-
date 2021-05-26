/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/23
 **************************************************************/
#include "DPExclusiveShop.h"
#include <iostream>
#include <time.h>  

Cosmetic DPPurchasingAgent::getExclusive(const std::string& exclusiveName) {
	// …………
	// 复杂的此操作
	// 飘洋过海………………等等
	// …………
	Cosmetic cosmetic;
	cosmetic._name = exclusiveName;
	time_t myt = time(NULL);
	cosmetic._commodityCode = ctime(&myt);
	return cosmetic;
}