/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPOriginator.h"
#include <stdio.h>
DPOriginator::DPOriginator(const std::string& state) {
	_state = state;
}
void DPOriginator::getState() {
	printf("%p state is %s\n", this, _state.c_str());
}
void DPOriginator::change(std::string state) {
	_state = state;
}
DPMemento DPOriginator::saveStateToMemento() {
	return DPMemento(_state);
}
void DPOriginator::restoreFromMemento(DPMemento& mem) {
	_state = mem.getState();
}