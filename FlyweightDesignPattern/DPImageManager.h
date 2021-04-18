/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/4/18
 **************************************************************/
#pragma once
#include "DPImage.h"
#include <unordered_map>
class DPImageManager {
	std::unordered_map<std::string, DPImage> _imageMap;
public:
	DPImageManager();
	DPImage getImage(std::string imageID);
};

