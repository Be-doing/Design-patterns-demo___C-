/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#pragma once
#include <vector>
#include "DPSubCommand.h"

using std::vector;
class DPInvoker {
	vector<DPCommand*> _comList;

public:
	void execute(DPCommand* cmd);
	void showHistoryCommand();
	void executeCmdWithIndex(size_t index);
};

