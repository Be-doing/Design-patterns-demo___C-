/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/8
 **************************************************************/
#include "DPHouse.h"
#include "DPDecorator.h"
int main() {
	DPHouse* house = new DPHouse();\
	// 带泳池的房子
	DPAbstractDecorator *spHouse = new DPSwimmingPoolDecorator(house);
	// spHouse->showStructure();
	// 还可以进行组合，带泳池和车库的房子
	DPAbstractDecorator* gSPHouse = new DPGarageDecorator(spHouse);
	gSPHouse->showStructure();
	return 0;
}