/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/6
 **************************************************************/
#pragma once
#include "DPBoss.h"
#include "DPAbstractEmployee.h"
#include <vector>
class DPReceptionist {
public:
	DPReceptionist(DPBoss boss);
	void addObverser(DPAbstractEmployee* observer);
	void removeObserver(DPAbstractEmployee* observer); 
private:
	void notifyAllObservers();

	std::vector<DPAbstractEmployee*> observers;
};

