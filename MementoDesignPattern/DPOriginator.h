/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#pragma once
#include "DPMemento.h"
class DPOriginator {
	std::string _state;
public:
	DPOriginator(const std::string& state);
	void change(std::string state);
	void getState();
	DPMemento saveStateToMemento();
	void restoreFromMemento(DPMemento& mem);
};

