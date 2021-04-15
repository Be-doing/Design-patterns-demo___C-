/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/14
 **************************************************************/
#include "DPHouse.h"
#include <iostream>
void DPStoneHouse::showMessage() {
	std::cout << _hostName << "的" << _houseName << std::endl;
}
void DPStoneHouse::setHouseName(std::string houseName) {
	_houseName = houseName;
}

void DPStoneHouse::setHostName(std::string hostName) {
	_hostName = hostName;
}

void DPCrystalHouse::showMessage() {
	std::cout << _hostName << "的" << _houseName << std::endl;
}

void DPCrystalHouse::setHouseName(std::string houseName) {
	_houseName = houseName;
}

void DPCrystalHouse::setHostName(std::string hostName) {
	_hostName = hostName;
}