/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/29
 **************************************************************/
#pragma once
// 抽象的产品类

class DPAbstractProduct {

};

// 抽象的手机
class DPAbstractPhone {
public:
	virtual void normalFunction() = 0;
};

// 抽象的路由器
class DPAbstractRouter {
public:
	virtual void normalRouting() = 0;
};