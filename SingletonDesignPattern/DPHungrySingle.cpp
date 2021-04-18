/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 4/2
 **************************************************************/
#include "DPHungrySingle.h"
// 程序启动慢
DPHungrySingle* DPHungrySingle::singleObj = new DPHungrySingle();
DPHungrySingle* DPHungrySingle::getSingleObj() {
	return singleObj;
}