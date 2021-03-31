/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/31
 **************************************************************/
#pragma once
#include <iostream>
#include <string>
class DPTemplateLibrary {
public:
	void say();
protected:
	virtual std::string getSomeString() = 0;
};

class DPSubLibrary : public DPTemplateLibrary {
	virtual std::string getSomeString();
};