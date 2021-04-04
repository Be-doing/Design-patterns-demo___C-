/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time:
 **************************************************************/
#pragma once
template <class T>
class DPAbstractStrategy {
public:
	virtual T useStrategy(T left, T right) = 0;
};

