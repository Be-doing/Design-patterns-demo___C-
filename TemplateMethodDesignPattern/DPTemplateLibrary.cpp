/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/31
 **************************************************************/
#include "DPTemplateLibrary.h"

void DPTemplateLibrary::say() {
	std::string res = this->getSomeString();
	if (res.size() > 0) {
		std::cout << std::string("我收到了lib外的字符串:") + res << std::endl;
	}
	else {
		std::cout << " say no" << std::endl;
	}
}

std::string DPSubLibrary::getSomeString() {
	return std::string("say HI");
}