/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/14
 **************************************************************/
#pragma once
#include "DPBuilder.h"
class DPHouseDirector {
	DPAbstractBuilder* _houseBuilder;
public:
	DPHouseDirector(DPAbstractBuilder* houseBuilder);
	DPAbstractHouse* houseDirector(std::string host);
};

