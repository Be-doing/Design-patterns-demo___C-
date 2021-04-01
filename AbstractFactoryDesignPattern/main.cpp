/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/29
 **************************************************************/
#include "DPFactory.h"
int main() {
	DPAbstractFactory* factory = new DPMiFactory();
	DPAbstractPhone* phone = factory->getPhone();
	phone->normalFunction();
	return 0;
} 