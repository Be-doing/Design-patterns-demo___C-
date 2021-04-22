/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/20
 **************************************************************/
#include "DPInternalImplementation.h"
DPNetworkManager DPNetworkManager::sharedInstance() {
	static DPNetworkManager sharedInstance;
	return sharedInstance;
}

void DPNetworkManager::postRequest(DPRequest* request, networkCompleteCallBack callBack) {
	// post
}
void DPNetworkManager::getRequest(DPRequest* request, networkCompleteCallBack callBack) {
	// get
}
void DPNetworkManager::download(DPRequest* request, std::string url, std::string destPath, networkCompleteCallBack callBack) {
	// download
}