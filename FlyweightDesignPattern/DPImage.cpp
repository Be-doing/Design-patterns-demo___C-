/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/18
 **************************************************************/
#include "DPImage.h"
#include <iostream>
DPImage::DPImage(std::string massage) {
	_imageMessage = massage; 
}

void DPImage::showMessage() {
	std::cout << _imageMessage << std::endl;
}