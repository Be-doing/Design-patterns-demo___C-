/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#pragma once

#include <string>

class DPMemento {
	// 注意
	// 状态可能不止一种，这里只是作为演示
	std::string _state;
public:
	DPMemento(const std::string& state);
	std::string getState();
};

