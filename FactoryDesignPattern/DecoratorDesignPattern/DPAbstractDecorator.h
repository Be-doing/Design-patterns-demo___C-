/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/8
 **************************************************************/
#pragma once
#include "DPAbstractHouse.h"
class DPAbstractDecorator : public DPAbstractHouse {
public:
	DPAbstractDecorator(DPAbstractHouse* house);
	virtual void showStructure();
protected:
	DPAbstractHouse* _house;
};

