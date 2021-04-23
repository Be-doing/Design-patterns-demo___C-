/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/23
 **************************************************************/
#pragma once
#include <string>
class DPAbstactExclusive {
public:
	virtual void getExclusive(const std::string& exclusiveName) = 0;
};


class DPExclusiveShop : public DPAbstactExclusive {
public:
	virtual void getExclusive(const std::string& exclusiveName);
};

