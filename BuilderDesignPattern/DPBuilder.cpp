#include "DPBuilder.h"
#include <iostream>

DPAbstractHouse* DPAbstractBuilder::getHouse() {
	return _pHouse;
}
DPStoneHouseBuilder::DPStoneHouseBuilder() {
	_pHouse = new DPStoneHouse();
}

void DPStoneHouseBuilder::setHostName(std::string hostName) {
	_pHouse->setHostName(hostName);
	_pHouse->setHouseName(std::string("石头房子"));
}

bool DPStoneHouseBuilder::buildFoundation() {
	_pHouse->setFoundationMessage(std::string("石头材质的地基"));
	return true;
}

bool DPStoneHouseBuilder::buildTheWall() {
	_pHouse->setWindowsMessage(std::string("四扇普通的窗"));
	_pHouse->setWallMessage(std::string("石头的墙壁"));
	return true;
}
bool DPStoneHouseBuilder::buildTheRoof() {
	_pHouse->setRoofMessage(std::string("水泥的屋顶"));
	return true;
}


DPCrystalHouseBuilder::DPCrystalHouseBuilder() {
	_pHouse = new DPStoneHouse();
}

void DPCrystalHouseBuilder::setHostName(std::string hostName) {
	_pHouse->setHostName(hostName);
	_pHouse->setHouseName(std::string("水晶房子"));
}

bool DPCrystalHouseBuilder::buildFoundation() {
	_pHouse->setFoundationMessage(std::string("蓝宝石地基"));
	return true;
}

bool DPCrystalHouseBuilder::buildTheWall() {
	_pHouse->setWindowsMessage(std::string("平门窗、推拉窗、折叠窗、转窗、转窗又分为上悬窗、下悬窗、中悬窗、立转窗、百叶窗"));
	_pHouse->setWallMessage(std::string("水晶墙壁"));
	return true;
}
bool DPCrystalHouseBuilder::buildTheRoof() {
	_pHouse->setRoofMessage(std::string("琉璃瓦"));
	return true;
}
