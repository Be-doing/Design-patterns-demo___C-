/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/13
 **************************************************************/
#include "DPClonedAnimal.h"
#include <iostream>
DPClonedSheep::DPClonedSheep(std::string name) {
	_name = name;
}
DPClonedSheep::DPClonedSheep(const DPClonedSheep& sheep) {
	_name = std::string("克隆羊") + sheep._name;
}
void DPClonedSheep::AnimalCry() {
	std::cout << _name << "咩咩咩" << std::endl;
}
DPAbstractClonedAnimal* DPClonedSheep::clone() {
	return new DPClonedSheep(*this);
}


DPClonedCattle::DPClonedCattle(std::string name) {
	_name = name;
}
DPClonedCattle::DPClonedCattle(const DPClonedCattle& cattle) {
	_name = std::string("克隆牛") + cattle._name;
}
void DPClonedCattle::AnimalCry() {
	std::cout << _name << "哞哞哞" << std::endl;
}
DPAbstractClonedAnimal* DPClonedCattle::clone() {
	return new DPClonedCattle(*this);
}