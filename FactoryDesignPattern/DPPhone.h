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

	// û��ʵ����Ա���ݲ�������������
	// virtual ~DPPhone() = 0;
};