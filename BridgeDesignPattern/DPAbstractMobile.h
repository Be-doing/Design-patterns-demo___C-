/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/11
 **************************************************************/
#pragma once
#include "DPAbstractApplication.h"
#include <unordered_map>
class DPAbstractMobile {
protected:
	std::unordered_map<DPAbstractApplication*, int> _appList;
public:
	virtual void installApp(DPAbstractApplication* app) = 0;
	virtual void runApp(DPAbstractApplication* app) = 0;
};

