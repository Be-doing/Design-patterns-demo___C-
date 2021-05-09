/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/9
 **************************************************************/
#include "DPShell.h"
#include <stdio.h>
void DPShell::ls(std::string arg) {
	if (arg.size() > 0) {
		printf("[%s] -%s", __FUNCTION__, arg.c_str());
	}
	else {
		printf("[%s]", __FUNCTION__);
	}
}

void DPShell::cd(std::string arg) {
	if (arg.size() > 0) {
		printf("[%s] -%s", __FUNCTION__, arg.c_str());
	}
	else {
		printf("[%s]", __FUNCTION__);
	}
}

void DPShell::pwd() {
	printf("[%s]", __FUNCTION__);
}