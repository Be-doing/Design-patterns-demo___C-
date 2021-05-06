/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPCompany.h"
#include <iostream>
DPSeniorEmploye::DPSeniorEmploye(const std::string& name, const std::string& dept, const std::string& rank)
:DPEmploye::DPEmploye(name, dept, rank){

}
void DPSeniorEmploye::addSubordinate(DPEmploye& e) {
	_employeList.push_back(&e);
}
void DPSeniorEmploye::employeeTurnover(DPEmploye& e) {
	_employeList.remove(&e);
}
void DPSeniorEmploye::showMessage() {
	std::cout << "[" << _dpName << "] ";
	std::cout << "[" << _dpDept << "] ";
	std::cout << "[" << _dpRank << "]" << std::endl;
	for (auto& e : _employeList) {
		e->showMessage();
	}
}

DPBasicEmploye::DPBasicEmploye(const std::string& name, const std::string& dept, const std::string& rank)
	:DPEmploye::DPEmploye(name, dept, rank) {

}

void DPBasicEmploye::showMessage() {
	std::cout << "[" << _dpName << "] ";
	std::cout << "[" << _dpDept << "] ";
	std::cout << "[" << _dpRank << "]" << std::endl;
}