/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/25
 **************************************************************/
#pragma once
#include <string>
struct DPCommonButton;
typedef void (*DPCommonButtonClick)(const DPCommonButton& button);
typedef void (*DPViewEditCallBack)(std::string userName, int userAge);
struct DPCommonButton {
	std::string _title;
	DPCommonButtonClick _buttonClickAction;
};
struct DPCommonLabel {
	std::string _text;
};


class DPView {

};
class DPViewDelegate {
public:
	virtual void DPViewEditCallBack(std::string userName, int userAge) = 0;
};
class DPUserMessageEditView : public DPView{
	DPCommonButton* _editButton;
	DPCommonLabel* _userNameLabel;
	DPCommonLabel* _userAgeLabel;

	void buttonClick(const DPCommonButton& button);
public:
	DPViewDelegate* _delegate;
	DPUserMessageEditView(DPViewDelegate* delegate, std::string userName, std::string userAge);
	//DPViewEditCallBack _viewEditkAction;
	void display();
};
