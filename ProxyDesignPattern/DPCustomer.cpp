/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/23
 **************************************************************/
#include "DPCustomer.h"
#include <iostream>
DPCustomer::DPCustomer(std::string name, DPAbstactExclusive* delegate)
:_name(name)
,_delegate(delegate){

}

std::string DPCustomer::getName() {
	return _name;
}

void DPCustomer::boughtExclusive(const std::string& exclusiveName) {	
	Cosmetic cosmetic = _delegate->getExclusive(this, exclusiveName);
	std::cout << "[" << _name << "] bought a cosmetic\n";
	std::cout << "[" << cosmetic._name << " : " << cosmetic._commodityCode << "]\n";
}