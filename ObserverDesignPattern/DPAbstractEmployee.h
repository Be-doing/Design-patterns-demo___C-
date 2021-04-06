/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/6
 **************************************************************/
#pragma once
#include "DPBoss.h"
class DPAbstractEmployee {
	virtual void updateWorkWithBossState(DPBossState state) = 0;
};

