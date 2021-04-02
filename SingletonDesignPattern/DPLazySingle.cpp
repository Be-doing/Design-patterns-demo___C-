/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 4/2
 **************************************************************/
#include "DPLazySingle.h"

std::mutex* DPLazySingle::_mutex = new std::mutex();
DPLazySingle* DPLazySingle::_singleObj = nullptr;

DPLazySingle* DPLazySingle::getSingleObj() {
	if (_singleObj == nullptr) {
		_mutex->lock();
		if (_singleObj == nullptr) {
			_singleObj = new DPLazySingle();
		}
		_mutex->unlock();
	}
	return _singleObj;
}

