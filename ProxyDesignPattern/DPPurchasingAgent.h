/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/23
 **************************************************************/
#pragma once
#include "DPExclusiveShop.h"
class DPPurchasingAgent : public DPAbstactExclusive {
public:
	DPPurchasingAgent();
	virtual void getExclusive(const std::string& exclusiveName);
private:
	DPExclusiveShop* _shop;
};

