/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/20
 **************************************************************/
#include <stdio.h>
#include "DPUtility.h"

void downloadCallBack(DPError* error, DPResponse* response) {

}
int main() {
	DPRequest req;
	DPUtility::download(&req, "www.baidu.com/xxx", "/user/admin/desktop/", &downloadCallBack);
	return 0;
}