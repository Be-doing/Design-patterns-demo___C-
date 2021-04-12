/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/8
 **************************************************************/
#pragma once
#include "DPAbstractDecorator.h"
class DPGardenDecorator :public DPAbstractDecorator {
public:
	DPGardenDecorator(DPAbstractHouse* house);
	virtual void showStructure();
};


class DPSwimmingPoolDecorator :public DPAbstractDecorator {
public:
	DPSwimmingPoolDecorator(DPAbstractHouse* house);
	virtual void showStructure();
};

class DPGarageDecorator :public DPAbstractDecorator {
public:
	DPGarageDecorator(DPAbstractHouse* house);
	virtual void showStructure();
};
