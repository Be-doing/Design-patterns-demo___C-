/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/8
 **************************************************************/
#include "DPDecorator.h"
#include <iostream>
DPGardenDecorator::DPGardenDecorator(DPAbstractHouse* house)
	:DPAbstractDecorator(house) {

}

void DPGardenDecorator::showStructure() {
	std::cout << "带花园" << std::endl;
}

DPSwimmingPoolDecorator::DPSwimmingPoolDecorator(DPAbstractHouse* house)
	:DPAbstractDecorator(house) {

}

void DPSwimmingPoolDecorator::showStructure() {
	std::cout << "带花园" << std::endl;
}

DPGarageDecorator::DPGarageDecorator(DPAbstractHouse* house)
	:DPAbstractDecorator(house) {

}

void DPGarageDecorator::showStructure() {
	std::cout << "带车库" << std::endl;
	
}