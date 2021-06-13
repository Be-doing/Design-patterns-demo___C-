/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPInvoker.h"
#include <iostream>


void DPInvoker::execute(DPCommand* cmd) {
	if (cmd != nullptr) {
		cmd->execute();
		_comList.push_back(cmd);
	}
}


void DPInvoker::showHistoryCommand() {
	for (auto cmd : _comList) {
		std::cout << cmd->info() << std::endl;
	}
}
void DPInvoker::executeCmdWithIndex(size_t index) {
	if (index < _comList.size()) {
		execute(_comList[index]);
	}
}