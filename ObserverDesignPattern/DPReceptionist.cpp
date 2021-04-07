/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/6
 **************************************************************/
#include "DPReceptionist.h"
void DPReceptionist::addObverser(DPAbstractEmployee* observer) {
	_observers.push_back(observer);
}
void DPReceptionist::removeObserver(DPAbstractEmployee* observer) {
	_observers.remove(observer);
}

void DPReceptionist::setBossState(DPBossState state) {
	_bossState = state;
	notifyAllObservers();
}
void DPReceptionist::notifyAllObservers() {
	for (auto observer : _observers) {
		observer->updateWorkWithBossState(_bossState);
	}
}
