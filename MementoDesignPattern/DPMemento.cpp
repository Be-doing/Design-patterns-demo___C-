/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPMemento.h"


DPMemento::DPMemento(const std::string& state) {
	_state = state;
}
std::string DPMemento::getState() {
	return _state;
}