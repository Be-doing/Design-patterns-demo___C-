/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description: 
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/18
 **************************************************************/
#include "DPImageManager.h"

int main() {
	DPImage image = DPImageManager().getImage(std::string("�羰"));
	image.showMessage();
	return 0;
}