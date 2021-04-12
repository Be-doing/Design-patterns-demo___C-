/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/28
 **************************************************************/
#pragma once
#include "DPPhone.h"
class DPAbstractPhoneFactory {
public:
	virtual DPPhone* getPhone() = 0; 

	// 算了，类太多了，不写虚析构了   !=_=
};