/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/6
 **************************************************************/
#include "DPCompany.h"
int main() {
	DPBasicEmploye jia(std::string("jia Smith"), std::string("RD department"), std::string("T3"));
	DPBasicEmploye yi(std::string("yi Jones"), std::string("RD department"), std::string("T3"));
	DPBasicEmploye bing(std::string("bing Williams"), std::string("Marketing Department"), std::string("T3"));
	DPBasicEmploye ding(std::string("ding Brown"), std::string("Marketing Department"), std::string("T3"));

	DPSeniorEmploye wu(std::string("wu Johnson"), std::string("RD department"), std::string("T6"));
	wu.addSubordinate(jia);
	wu.addSubordinate(yi);
	DPSeniorEmploye ji(std::string("ji Wilson"), std::string("Marketing Department"), std::string("T6"));
	ji.addSubordinate(bing);
	ji.addSubordinate(ding);
	DPSeniorEmploye geng(std::string("geng Garcia"), std::string("CEO"), std::string("T10"));
	geng.addSubordinate(wu);
	geng.addSubordinate(ji);

	geng.showMessage();

	ji.employeeTurnover(ding);
	geng.showMessage();
	return 0;
}