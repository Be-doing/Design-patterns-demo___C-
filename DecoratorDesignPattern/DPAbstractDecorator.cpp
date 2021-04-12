/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/8
 **************************************************************/
#include "DPAbstractDecorator.h"
#include <iostream>
DPAbstractDecorator::DPAbstractDecorator(DPAbstractHouse* house)
	:_house(house){

}

void DPAbstractDecorator::showStructure() {
	_house->showStructure();
}