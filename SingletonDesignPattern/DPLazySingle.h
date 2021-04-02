/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 4/2
 **************************************************************/
#pragma once
#include <iostream>
#include <mutex>
class DPLazySingle {
public:
	static DPLazySingle* getSingleObj();
private:
	DPLazySingle(const DPLazySingle&) = delete;
	DPLazySingle();
	// 由于静态方法需要访问
	static DPLazySingle* _singleObj;
	static std::mutex* _mutex;
};

