/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/8
 **************************************************************/
#pragma once
#include <vector>
#include <string>
#include "DPShapeModel.h"


class DPView {
	std::string _viewId;
public:
	DPRect _frame;
	DPView(std::string viewId);


	// 方法
	virtual void addSubView(DPView* view);
	virtual void touch(DPPoint point);
protected:
	std::vector<DPView*> _subViews;

	// 方法
	virtual DPView* hitTest(DPPoint point);

};

