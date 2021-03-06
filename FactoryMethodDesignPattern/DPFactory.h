/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/12
 **************************************************************/
#pragma once
#include "DPPhoneFactory.h"
class DPHuaWeiPhoneFactory : public DPAbstractPhoneFactory{
public:
	virtual DPPhone* getPhone();
};

class DPMiPhoneFactory : public DPAbstractPhoneFactory {
public:
	virtual DPPhone* getPhone();
};

class DPOppoPhoneFactory : public DPAbstractPhoneFactory {
public:
	virtual DPPhone* getPhone();
};
