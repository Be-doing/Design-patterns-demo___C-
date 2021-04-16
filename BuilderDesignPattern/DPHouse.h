/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/14
 **************************************************************/
#pragma once
#include <string>
class DPAbstractHouse {
public:
	virtual void showMessage() = 0;
	virtual void setHostName(std::string hostName) = 0;
	virtual void setHouseName(std::string houseName) = 0;
protected:
	std::string _hostName; // 户主
	std::string _houseName; // 名字
};

class DPStoneHouse :public DPAbstractHouse {
public:
	virtual void setHostName(std::string hostName);
	virtual void setHouseName(std::string houseName);
	virtual void showMessage();
};

class DPCrystalHouse :public DPAbstractHouse {
public:
	virtual void setHostName(std::string hostName);
	virtual void setHouseName(std::string houseName);
	virtual void showMessage();
};

