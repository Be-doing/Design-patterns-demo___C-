/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/8
 **************************************************************/
#include "DPCustomView.h"
int main() {
	DPView winodws("window");
	winodws._frame = DPRect(DPPoint(0, 0), DPSize(300, 500));
	DPView rootView("rootView");
	rootView._frame = DPRect(DPPoint(10, 30), DPSize(30, 100));
	DPView label("label");
	label._frame = DPRect(DPPoint(10, 300), DPSize(300, 100));
	winodws.addSubView(&rootView);
	winodws.addSubView(&label);


	winodws.touch(DPPoint(10, 60));

	winodws.touch(DPPoint(30, 350));
	return 0;
}