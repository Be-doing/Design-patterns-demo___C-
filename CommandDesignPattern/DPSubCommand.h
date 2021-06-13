/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#pragma once
#include "DPShell.h"
#include "DPCommand.h"

class DPLsCommad :public DPCommand {
	DPShell _shell;
	std::string _arg;
public:
	DPLsCommad(std::string arg = "");
	virtual string info();
	virtual void execute();
};

class DPCdCommad :public DPCommand {
	DPShell _shell;
	std::string _arg;
public:
	DPCdCommad(std::string arg = "");
	virtual string info();
	virtual void execute();
};

class DPPwdCommad :public DPCommand {
	DPShell _shell;
public:
	DPPwdCommad();
	virtual string info();
	virtual void execute();
};