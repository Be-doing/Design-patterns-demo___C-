/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/14
 **************************************************************/
#pragma once
#include "DPHouse.h"
class DPAbstractBuilder {
public:
	virtual void setHostName(std::string hostName) = 0;
	virtual bool buildFoundation() = 0;
	virtual bool buildTheWall() = 0;
	virtual bool buildTheRoof() = 0;

protected:
	DPAbstractHouse* _pHouse;
};


class DPStoneHouseBuilder : public DPAbstractBuilder {
public:
	DPStoneHouseBuilder(DPAbstractHouse* pHouse);
	virtual void setHostName(std::string hostName);
	virtual bool buildFoundation();
	virtual bool buildTheWall();
	virtual bool buildTheRoof();
protected:

};

class DPCrystalHouseBuilder : public DPAbstractBuilder {
public:
	DPCrystalHouseBuilder(DPAbstractHouse* pHouse);
	virtual void setHostName(std::string hostName);
	virtual bool buildFoundation();
	virtual bool buildTheWall();
	virtual bool buildTheRoof();
};