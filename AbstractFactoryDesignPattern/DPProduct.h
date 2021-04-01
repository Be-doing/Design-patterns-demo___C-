/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/29
 **************************************************************/
#pragma once
#include "DPAbstractProduct.h"
class DPProduct
{
};

class DPMiPhone : public DPAbstractPhone {
	void normalFunction();
};

class DPHuaWeiPhone : public DPAbstractPhone {
	void normalFunction();
};

class DPMiRouter : public DPAbstractRouter {
	void normalRouting();
};
 
class DPHuaWeiRouter : public DPAbstractRouter {
	void normalRouting();
};