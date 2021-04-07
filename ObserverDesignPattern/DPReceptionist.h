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
#include <list>
class DPReceptionist {
public:
	//DPReceptionist();
	void addObverser(DPAbstractEmployee* observer);
	void removeObserver(DPAbstractEmployee* observer); 
	void setBossState(DPBossState state);
private:
	void notifyAllObservers();
	DPBossState _bossState;
	std::list<DPAbstractEmployee*> _observers;
};

