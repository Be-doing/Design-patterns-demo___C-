/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/20
 **************************************************************/
#pragma once
#include <string>
struct DPError {
	std::string _errorCode;
	std::string _errorMessage;
};

struct DPResponse {

};

struct  DPRequest {

};
typedef void(*networkCompleteCallBack)(DPError* error, DPResponse* response);
class DPNetworkManager {
public:
	static DPNetworkManager sharedInstance();
	void postRequest(DPRequest* request, networkCompleteCallBack callBack);
	void getRequest(DPRequest* request, networkCompleteCallBack callBack);
	void download(DPRequest* request, std::string url, std::string destPath, networkCompleteCallBack callBack);
};

class DPFileService {
	// 不再细说
};

