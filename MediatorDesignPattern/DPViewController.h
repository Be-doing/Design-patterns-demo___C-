/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/25
 **************************************************************/
#pragma once
#include"DPView.h"
#include"DPModel.h"
class DPViewController : public DPViewDelegate{
	DPUserModel* _userMessage;
	DPUserMessageEditView* _view;
public:
	void DPViewEditCallBack(std::string userName, int userAge);
	DPViewController();
	void viewDidAppear();
};

