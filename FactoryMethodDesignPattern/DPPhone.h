/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/28
 **************************************************************/
#pragma once

class DPPhone {
public:
	virtual void messageFunction() = 0;
	virtual void wechatFunction() = 0;
	virtual void baiduFunction() = 0;
	virtual void douyinFunction() = 0;
	 
	// 为了规范还是定义一下虚析构
	 virtual ~DPPhone();
};