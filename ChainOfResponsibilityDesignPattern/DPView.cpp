﻿/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/8
 **************************************************************/
#include "DPView.h"
#include <iostream>

DPView::DPView(std::string viewId = std::string()){
	_viewId = viewId;
}

DPView* DPView::hitTest(DPPoint point) {
	// 简单的实现
	if (!pointInsideRect(point, this->_frame)) {
		return nullptr;
	}
	DPView* resView = nullptr;
	for (auto& view : _subViews) {
		resView = view->hitTest(point);
		if (resView) {
			std::cout << view->_viewId << std::endl;
			return resView;
		}
	}
	std::cout << this->_viewId << std::endl;
	return this;
}

void DPView::addSubView(DPView* view) {
	_subViews.push_back(view);
}

void DPView::touch(DPPoint point) {
	hitTest(point);
}