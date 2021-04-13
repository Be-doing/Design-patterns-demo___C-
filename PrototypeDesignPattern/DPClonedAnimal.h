/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/13
 **************************************************************/
#pragma once
#include "DPAbstractClonedAnimal.h"
class DPClonedSheep : public DPAbstractClonedAnimal {

public:
	DPClonedSheep(std::string name);
	DPClonedSheep(const DPClonedSheep& sheep);
	virtual void AnimalCry();
	virtual DPAbstractClonedAnimal* clone();
};

class DPClonedCattle : public DPAbstractClonedAnimal {

public:
	DPClonedCattle(std::string name);
	DPClonedCattle(const DPClonedCattle& cattle);
	virtual void AnimalCry();
	virtual DPAbstractClonedAnimal* clone();
};


