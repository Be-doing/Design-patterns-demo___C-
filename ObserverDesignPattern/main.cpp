/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/6
 **************************************************************/
#include "DPEmployee.h"
#include "DPReceptionist.h"
int main() {
	DPAbstractEmployee* rd = new DPRDEmployee();
	DPAbstractEmployee* qa = new DPQAEmployee();
	DPAbstractEmployee* pm = new DPPMEmployee();
	DPReceptionist* rcp = new DPReceptionist();

	rcp->addObverser(rd);
	rcp->addObverser(qa);
	rcp->addObverser(pm);

	rcp->setBossState(DPBossState::DPBossStateIsGone);
	rcp->setBossState(DPBossState::DPBossStateIsComming);
	return 0;
}