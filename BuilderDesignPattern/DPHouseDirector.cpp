/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/14
 **************************************************************/
#include "DPHouseDirector.h"

DPHouseDirector::DPHouseDirector(DPAbstractBuilder* houseBuilder) {
	_houseBuilder = houseBuilder;
}

DPAbstractHouse* DPHouseDirector::houseDirector(std::string host) {
	if (host.size() <= 0) {
		return nullptr;
	}
	_houseBuilder->setHostName(host);
	if (_houseBuilder->buildFoundation()) {
		_houseBuilder->buildTheWall();
		_houseBuilder->buildTheRoof();
	}
	return _houseBuilder->getHouse();
}
