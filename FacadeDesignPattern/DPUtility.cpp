/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/20
 **************************************************************/
#include "DPUtility.h"

void DPUtility::postRequest(DPRequest* request, networkCompleteCallBack callBack) {
	DPNetworkManager::sharedInstance().postRequest(request, callBack);
} 
void DPUtility::getRequest(DPRequest * request, networkCompleteCallBack callBack) {
	DPNetworkManager::sharedInstance().getRequest(request, callBack);
}
void DPUtility::download(DPRequest* request, std::string url, std::string destPath, networkCompleteCallBack callBack) {
	DPNetworkManager::sharedInstance().download(request, url, destPath, callBack);
}
