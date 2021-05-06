/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#pragma once
#include <string>
class DPEmploye {
protected:
	std::string _dpName;
	std::string _dpDept;
	std::string _dpRank;
public:
	DPEmploye(const std::string& name, const std::string& dept, const std::string& rank);
	virtual void showMessage() = 0;
};

