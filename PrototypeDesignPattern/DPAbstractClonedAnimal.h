/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/13
 **************************************************************/
#pragma once
#include <string>
class DPAbstractClonedAnimal {
protected:
	std::string _name;
public:
	virtual void AnimalCry() = 0;
	// 可以纯虚也可以不纯虚
	virtual DPAbstractClonedAnimal* clone() = 0;
};

