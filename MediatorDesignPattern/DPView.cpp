/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/25
 **************************************************************/
#include "DPView.h"
#include <iostream>
DPUserMessageEditView::DPUserMessageEditView(DPViewDelegate* delegate, std::string userName, std::string userAge) {
	_delegate = delegate;
	_userAgeLabel = new DPCommonLabel();
	_userAgeLabel->_text = userAge;
	_userNameLabel = new DPCommonLabel();
	_userNameLabel->_text = userName;
	_editButton = new DPCommonButton();


}

void DPUserMessageEditView::display() {
	std::cout << "=======================\n";
	std::cout << "user name: " << _userNameLabel->_text << "\n";
	std::cout << "user age: " << _userAgeLabel->_text << "\n";
	std::cout << "=======================\n";
}

void DPUserMessageEditView::buttonClick(const DPCommonButton& button) {
	std::string userName = _userNameLabel->_text;
	int userAge = atoi(_userAgeLabel->_text.c_str());
	std::cout << "=========Edit User Message View==============\n";
	std::cout << "change user name: ";
	std::cin >> userName;
	std::cout << "change user age: ";
	std::cin >> userAge;
	std::cout << "=======================\n";
	std::cout << "=======edit successful==========\n";
	std::cout << "=======================\n";
	if (_delegate) {
		_delegate->DPViewEditCallBack(userName, userAge);
	}
}