/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/23
 **************************************************************/
#pragma once
#include <string>
struct Cosmetic {
	std::string _name;
	std::string _commodityCode;
};
class DPAbstactExclusive {
public:
	virtual Cosmetic getExclusive(const std::string& exclusiveName) = 0;
};


class DPPurchasingAgent : public DPAbstactExclusive {
public:
	virtual Cosmetic getExclusive(const std::string& exclusiveName);
};

