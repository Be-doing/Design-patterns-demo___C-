/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#pragma once
#include "DPEmploye.h"
#include <list>
class DPSeniorEmploye : public DPEmploye {
	std::list<DPEmploye*> _employeList;
public:
	DPSeniorEmploye(const std::string& name, const std::string& dept, const std::string& rank);
	void addSubordinate(DPEmploye& e);
	void employeeTurnover(DPEmploye& e);
	virtual void showMessage();
};

class DPBasicEmploye : public DPEmploye {
public:
	DPBasicEmploye(const std::string& name, const std::string& dept, const std::string& rank);
	virtual void showMessage();
};