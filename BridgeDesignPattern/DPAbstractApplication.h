/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/11
 **************************************************************/
#pragma once
#include <iostream>
#include <string>
class DPAbstractApplication {
protected:
	std::string _appName;
public:
	DPAbstractApplication(std::string appName);
	virtual void Run() = 0;
};

