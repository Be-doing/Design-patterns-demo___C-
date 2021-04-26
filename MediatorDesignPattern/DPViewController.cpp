/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/25
 **************************************************************/
#include "DPViewController.h"
DPViewController::DPViewController() {
	_userMessage = new DPUserModel();
	_userMessage->_userName = "Tom";
	_userMessage->_age = 10;
	_userMessage->_userIdentify = "123456789";
	_view = new DPUserMessageEditView(this, _userMessage->_userName, std::to_string(_userMessage->_age));	
}

void DPViewController::DPViewEditCallBack(std::string userName, int userAge) {
	_userMessage->_userName = userName;
	_userMessage->_age = userAge;
}

void DPViewController::viewDidAppear() {
	_view->display();
}

