/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 4/2
 **************************************************************/
#include "DPLazySingle.h"
// 推荐如下写法：
// 除此之外使用静态全局对象，还可以使用局部静态变量
// static DPLazySingle& getSingleObj() {
//	    static DPLazySingle instance;
//  	return instance;
//
//   }
std::mutex* DPLazySingle::_mutex = new std::mutex();
DPLazySingle* DPLazySingle::_singleObj = nullptr;

DPLazySingle* DPLazySingle::getSingleObj() {
	if (_singleObj == nullptr) {
		// 1. 锁的代价太大，线程阻塞
		// 2. 内存reorder问题
		// 这里只是示范，在不规定使用一定使用饿汉模式时，推荐懒汉单例模式，且写法见最上面
		_mutex->lock();
		if (_singleObj == nullptr) {
			_singleObj = new DPLazySingle();
		}
		_mutex->unlock();
	}
	return _singleObj;
}

