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
#include <iomanip>
#include <ctime>
#include "DPCustomer.h"

Cosmetic DPPurchasingAgent::getExclusive(DPCustomer* customer, const std::string& exclusiveName) {
	// …………
	// 复杂的此操作
	// 飘洋过海………………等等
	// …………
	Cosmetic cosmetic;
	cosmetic._name = exclusiveName;
	cosmetic._commodityCode = exclusiveName + "code";
	std::cout << "Purchasing " << exclusiveName << " to " << customer->getName() << "\n";
	return cosmetic;
}