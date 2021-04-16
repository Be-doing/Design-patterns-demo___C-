#include "DPBuilder.h"
#include <iostream>
DPStoneHouseBuilder::DPStoneHouseBuilder(DPAbstractHouse* pHouse) {
	_pHouse = pHouse;
}

void DPStoneHouseBuilder::setHostName(std::string hostName) {
	_pHouse->setHostName(hostName);
	_pHouse->setHouseName(std::string("石头房子"));
}

bool DPStoneHouseBuilder::buildFoundation() {
	std::cout << "石头房子修建了地基" << std::endl;
	return true;
}

bool DPStoneHouseBuilder::buildTheWall() {
	std::cout << "石头房子修建了墙壁" << std::endl;
	return true;
}
bool DPStoneHouseBuilder::buildTheRoof() {
	std::cout << "石头房子修建了屋顶" << std::endl;
	return true;
}


DPCrystalHouseBuilder::DPCrystalHouseBuilder(DPAbstractHouse* pHouse) {
	_pHouse = pHouse;
}

void DPCrystalHouseBuilder::setHostName(std::string hostName) {
	_pHouse->setHostName(hostName);
	_pHouse->setHouseName(std::string("水晶房子"));
}

bool DPCrystalHouseBuilder::buildFoundation() {
	std::cout << "水晶房子修建了地基" << std::endl;
	return true;
}

bool DPCrystalHouseBuilder::buildTheWall() {
	std::cout << "水晶房子修建了墙壁" << std::endl;
	return true;
}
bool DPCrystalHouseBuilder::buildTheRoof() {
	std::cout << "水晶房子修建了屋顶" << std::endl;
	return true;
}
