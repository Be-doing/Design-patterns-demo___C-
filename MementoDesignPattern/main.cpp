/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPOriginator.h"
#include <iostream>

int main() {
	DPOriginator origin(std::string("bind"));
	origin.getState();

	origin.change(std::string("recv"));
	origin.getState();

	DPMemento mem =  origin.saveStateToMemento();
	origin.change(std::string("send"));
	origin.getState();

	origin.restoreFromMemento(mem);
	origin.getState();



	return 0;
}