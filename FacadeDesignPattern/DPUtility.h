/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/20
 **************************************************************/
#pragma once
#include <string>
#include "DPInternalImplementation.h"
class DPUtility {
public:
	static void postRequest(DPRequest* request, networkCompleteCallBack callBack);
	static void getRequest(DPRequest* request, networkCompleteCallBack callBack);
	static void download(DPRequest* request, std::string url, std::string destPath, networkCompleteCallBack callBack);
};

