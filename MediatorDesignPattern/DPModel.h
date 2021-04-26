/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/25
 **************************************************************/
#pragma once
#include <string>

typedef int DPModelInt;

struct DPAbstractModel{

};

struct DPUserModel :public DPAbstractModel{
	std::string _userName;
	DPModelInt _age;
	std::string _userIdentify;
};
