/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/6
 **************************************************************/
#pragma once
#include "DPAbstractEmployee.h"
class DPQAEmployee : public DPAbstractEmployee {
	void updateWorkWithBossState(DPBossState state);
};

class DPRDEmployee : public DPAbstractEmployee {
	void updateWorkWithBossState(DPBossState state);
};

class DPPMEmployee : public DPAbstractEmployee {
	void updateWorkWithBossState(DPBossState state);
};