/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/12
 **************************************************************/
#include "DPFactory.h"
int main() {
	// 当然在类中，这个DPHuaWeiPhoneFactory()这一步，是定义成成员，且类型为DPAbstractFactory
	DPPhone* huaweiPhone = DPHuaWeiPhoneFactory().getPhone(); 
	huaweiPhone->baiduFunction();
	return 0;
}