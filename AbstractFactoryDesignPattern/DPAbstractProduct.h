/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/3/29
 **************************************************************/
#pragma once
// ����Ĳ�Ʒ��

class DPAbstractProduct {

};

// ������ֻ�
class DPAbstractPhone {
public:
	virtual void normalFunction() = 0;
};

// �����·����
class DPAbstractRouter {
public:
	virtual void normalRouting() = 0;
};