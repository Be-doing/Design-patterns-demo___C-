/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/11
 **************************************************************/
#pragma once
#include "DPAbstractMobile.h"
class DPMiMobile : public DPAbstractMobile {
public:
	virtual void installApp(DPAbstractApplication* app);
	virtual void runApp(DPAbstractApplication* app);
};

class DPHuaweiMobile : public DPAbstractMobile {
public:
	virtual void installApp(DPAbstractApplication* app);
	virtual void runApp(DPAbstractApplication* app);
};


