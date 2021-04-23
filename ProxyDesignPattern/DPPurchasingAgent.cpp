/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/23
 **************************************************************/
#include "DPPurchasingAgent.h"
DPPurchasingAgent::DPPurchasingAgent() {
	_shop = new DPExclusiveShop();
}
void DPPurchasingAgent::getExclusive(const std::string& exclusiveName) {
	// …………
	// 复杂的此操作
	// …………
	_shop->getExclusive(exclusiveName);
}