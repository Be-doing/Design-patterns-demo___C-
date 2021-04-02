/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 4/2
 **************************************************************/
#pragma once
class DPHungrySingle {
public:
	static DPHungrySingle* getSingleObj();
private:
	DPHungrySingle();
	DPHungrySingle(const DPHungrySingle&) = delete;
	static DPHungrySingle* singleObj;
};

