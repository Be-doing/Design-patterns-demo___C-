/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *  
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/29
 **************************************************************/

// 抽象的工厂类
// 抽象的工厂可以拿到任何的产品
#pragma once
class DPAbstractPhone;
class DPAbstractRouter;
class DPAbstractFactory {
public:
	virtual DPAbstractPhone* getPhone() = 0;
	virtual DPAbstractRouter* getRouter() = 0;
};

