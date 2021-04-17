/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/14
 **************************************************************/
#include "DPHouseDirector.h"
int main() {
	DPAbstractBuilder* stoneBuilder = new DPStoneHouseBuilder();
	DPHouseDirector* director = new DPHouseDirector(stoneBuilder);
	DPAbstractHouse* stoneHouse =  director->houseDirector(std::string("王二麻子"));
	stoneHouse->showMessage();
	return 0;
} 