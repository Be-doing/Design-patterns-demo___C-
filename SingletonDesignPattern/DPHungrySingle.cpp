/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 4/2
 **************************************************************/
#include "DPHungrySingle.h"
DPHungrySingle* DPHungrySingle::singleObj = nullptr;


DPHungrySingle* DPHungrySingle::getSingleObj() {
	if (singleObj == nullptr) {
		singleObj = new DPHungrySingle();
	}
	return singleObj;
}