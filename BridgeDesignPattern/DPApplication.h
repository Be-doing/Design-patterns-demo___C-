/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/11
 **************************************************************/
#pragma once
#include "DPAbstractApplication.h"
class DPBaiduApplication : public DPAbstractApplication {
public:
	DPBaiduApplication(std::string appName);
	void Run();
};

class DPTiktokApplication : public DPAbstractApplication {
public:
	DPTiktokApplication(std::string appName);
	void Run();
};
class DPWeChatApplication : public DPAbstractApplication {
public:
	DPWeChatApplication(std::string appName);
	void Run();
};


