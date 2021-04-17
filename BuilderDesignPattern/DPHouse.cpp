/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/14
 **************************************************************/
#include "DPHouse.h"
#include <iostream>
void DPAbstractHouse::showMessage () {
	std::cout << _hostName << "的" << _houseName << std::endl;
	std::cout << _foundationMessage << std::endl;
	std::cout << _wallMessage << std::endl;
	std::cout << _roofMessage << std::endl;
	std::cout << _windowsMessage << std::endl;
}

void DPStoneHouse::setHouseName(std::string houseName) {
	// ……石头房子的扩展的内容……
	_houseName = houseName;
	// ……石头房子的扩展的内容……
}

void DPStoneHouse::setHostName(std::string hostName) {
	// ……石头房子的扩展的内容……
	_hostName = hostName;
	// ……石头房子的扩展的内容……
}
void DPStoneHouse::setWallMessage(std::string message) {
	// ……石头房子的扩展的内容……
	_wallMessage = message;
	// ……石头房子的扩展的内容……
}

void DPStoneHouse::setWindowsMessage(std::string message) {
	// ……石头房子的扩展的内容……
	_windowsMessage = message;
	// ……石头房子的扩展的内容……
}

void DPStoneHouse::setRoofMessage(std::string message) {
	// ……石头房子的扩展的内容……
	_roofMessage = message;
	// ……石头房子的扩展的内容……
}

void DPStoneHouse::setFoundationMessage(std::string message) {
	// ……石头房子的扩展的内容……
	_foundationMessage = message;
	// ……石头房子的扩展的内容……
}


void DPCrystalHouse::setHouseName(std::string houseName) {
	// ……水晶房子的扩展的内容……
	_houseName = houseName;
	// ……水晶房子的扩展的内容……
}

void DPCrystalHouse::setHostName(std::string hostName) {
	// ……水晶房子的扩展的内容……
	_hostName = hostName;
	// ……水晶房子的扩展的内容……
}

void DPCrystalHouse::setWallMessage(std::string message) {
	// ……水晶房子的扩展的内容……
	_wallMessage = message;
	// ……水晶房子的扩展的内容……
}

void DPCrystalHouse::setWindowsMessage(std::string message) {
	// ……水晶房子的扩展的内容……
	_windowsMessage = message;
	// ……水晶房子的扩展的内容……
}

void DPCrystalHouse::setRoofMessage(std::string message) {
	// ……水晶房子的扩展的内容……
	_roofMessage = message;
	// ……水晶房子的扩展的内容……
}

void DPCrystalHouse::setFoundationMessage(std::string message) {
	// ……水晶房子的扩展的内容……
	_foundationMessage = message;
	// ……水晶房子的扩展的内容……
}