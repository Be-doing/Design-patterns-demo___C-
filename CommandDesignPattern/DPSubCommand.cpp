/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPSubCommand.h"

DPLsCommad::DPLsCommad(std::string arg)
	:_arg(arg) {

}
void DPLsCommad::execute() {
	_shell.ls(_arg);
}

DPCdCommad::DPCdCommad(std::string arg)
	:_arg(arg) {

}

void DPCdCommad::execute() {
	_shell.cd(_arg);
}

void DPPwdCommad::execute() {
	_shell.pwd();
}
