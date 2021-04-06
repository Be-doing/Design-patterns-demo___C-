/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/6
 **************************************************************/
#pragma once
#include "DPEmployee.h"
#include <iostream>
void DPQAEmployee::updateWorkWithBossState(DPBossState state) {
	switch (state) {
	case DPBossState::DPBossStateIsComming:
		std::cout << "QA开始认真测试" << std::endl;
		break;
	case DPBossState::DPBossStateIsGone:
		std::cout << "QA开始追剧" << std::endl;
		break;
	default:
		std::cout << "QA提一堆bug" << std::endl;
		break;
	}
	
}

void DPRDEmployee::updateWorkWithBossState(DPBossState state) {
	switch (state) {
	case DPBossState::DPBossStateIsComming:
		std::cout << "RD打开IDE" << std::endl;
		break;
	case DPBossState::DPBossStateIsGone:
		std::cout << "RD打开脉脉和知乎" << std::endl;
		break;
	default:
		std::cout << "和QA和谐交谈，和PM友善交流" << std::endl;
		break;
	}
}

void DPPMEmployee::updateWorkWithBossState(DPBossState state) {
	switch (state) {
	case DPBossState::DPBossStateIsComming:
		std::cout << "PM打开PPT" << std::endl;
		break;
	case DPBossState::DPBossStateIsGone:
		std::cout << "PM打开美团" << std::endl;
		break;
	default:
		std::cout << "PM写PPT" << std::endl;
		break;
	}
}

