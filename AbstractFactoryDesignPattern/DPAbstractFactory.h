/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *  
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/29
 **************************************************************/

// ����Ĺ�����
// ����Ĺ��������õ��κεĲ�Ʒ
#pragma once
class DPAbstractPhone;
class DPAbstractRouter;
class DPAbstractFactory {
public:
	virtual DPAbstractPhone* getPhone() = 0;
	virtual DPAbstractRouter* getRouter() = 0;
};

