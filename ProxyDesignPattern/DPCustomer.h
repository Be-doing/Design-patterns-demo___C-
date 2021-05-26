/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/23
 **************************************************************/
#pragma once
#include "DPExclusiveShop.h"
class DPCustomer {
	std::string _name;
	DPAbstactExclusive* _delegate;
public:
	DPCustomer(std::string name, DPAbstactExclusive* delegate);
	void boughtExclusive(const std::string& exclusiveName);
};

