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
	_info = string("ls") += arg;
}
string DPLsCommad::info() {
	return _info;
}
void DPLsCommad::execute() {
	_shell.ls(_arg);
}

DPCdCommad::DPCdCommad(std::string arg)
	:_arg(arg) {
	_info = string("cd") += arg;
}
string DPCdCommad::info() {
	return _info;
}
void DPCdCommad::execute() {
	_shell.cd(_arg);
}

DPPwdCommad::DPPwdCommad() {
	_info = string("pwd");
}
string DPPwdCommad::info() {
	return _info;
}
void DPPwdCommad::execute() {
	_shell.pwd();
}
