/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/29
 **************************************************************/
#pragma once
// Ʒ�ƹ���
#include "DPAbstractFactory.h"
#include "DPProduct.h"
class DPMiFactory : public DPAbstractFactory {
	 DPAbstractPhone* getPhone();
	 DPAbstractRouter* getRouter();
};

class DPHuaWeiFactory : public DPAbstractFactory {
	 DPAbstractPhone* getPhone();
	 DPAbstractRouter* getRouter();
};
