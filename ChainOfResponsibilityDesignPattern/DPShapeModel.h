/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/8
 **************************************************************/
#pragma once

struct DPPoint {
	float _x;
	float _y;
	DPPoint(float x, float y)
	:_x(x)
	,_y(y){}
};

struct DPSize {
	float _width;
	float _height;
	DPSize(float width, float height)
		:_width(width)
		, _height(height){}
};

struct DPRect {
	DPPoint _point;
	DPSize _size;
	DPRect(DPPoint point = DPPoint(0,0), DPSize size = DPSize(0,0))
		:_point(point)
		,_size(size) {}
};

bool pointInsideRect(DPPoint point, DPRect rect);