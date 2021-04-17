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
	virtual void showMessage();
	virtual void setWallMessage(std::string message) = 0;
	virtual void setWindowsMessage(std::string message) = 0;
	virtual void setRoofMessage(std::string message) = 0;
	virtual void setFoundationMessage(std::string message) = 0;
	virtual void setHostName(std::string hostName) = 0;
	virtual void setHouseName(std::string houseName) = 0;
protected:
	std::string _hostName; // 户主
	std::string _houseName; // 名字
	std::string _wallMessage;
	std::string _windowsMessage;
	std::string _roofMessage;
	std::string _foundationMessage;
};

class DPStoneHouse :public DPAbstractHouse {
public:
	virtual void setHostName(std::string hostName);
	virtual void setHouseName(std::string houseName);
	virtual void setWallMessage(std::string message);
	virtual void setWindowsMessage(std::string message);
	virtual void setRoofMessage(std::string message);
	virtual void setFoundationMessage(std::string message);
};

class DPCrystalHouse :public DPAbstractHouse {
public:
	virtual void setHostName(std::string hostName);
	virtual void setHouseName(std::string houseName);
	virtual void setWallMessage(std::string message);
	virtual void setWindowsMessage(std::string message);
	virtual void setRoofMessage(std::string message);
	virtual void setFoundationMessage(std::string message);
};

