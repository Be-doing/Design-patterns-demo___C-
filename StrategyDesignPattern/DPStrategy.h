/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time:
 **************************************************************/
#pragma once
#include "DPAbstractStrategy.h"
/*
	应该将类放在单独的文件中，下面的方式是为了演示，实际项目中不推荐
*/
// template <class T>
class DPAdditionStrategy : public DPAbstractStrategy <double>{
public:
	double useStrategy(double left, double right);
};

class DPSubtractionStrategy : public DPAbstractStrategy <double> {
public:
	double useStrategy(double left, double right);
};

