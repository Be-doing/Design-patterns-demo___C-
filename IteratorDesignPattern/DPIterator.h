/**************************************************************
 *  Create by LGC, All Rights Reserved.
 *  Description:
 *
 *  @author: https://blog.csdn.net/Void_leng
 *  @time: 2021/5/7
 *
 **************************************************************/
#pragma once
#include <string>
// 由于模板不能分离编译
// 这里写在一个文件里面 

/*面向对象的写法*/
template <class T>
class DPIterator {
public:
	virtual T& next() = 0;
	virtual T& current() = 0;
};
class DPContainerIterator;
typedef struct DPNode {
	std::string _val;
	DPNode* _next;
};
class DPContainer {
	DPNode* _head;
public:
	DPContainerIterator begin() {
		return DPContainerIterator(_head->_next);
	}
	DPContainerIterator end() {
		return DPContainerIterator(_head);
	}

};


class DPContainerIterator : public DPIterator<DPNode*> {
	DPNode* _node;
public:
	DPContainerIterator(DPNode* node)
		:_node(node) {}
	DPNode*& next() {
		return _node->_next;
	}
	DPNode*& current() {
		return _node;
	}
	/*包括 ++ 、->、* 等一系列操作都应该实现*/
};


/*
注意：
	在C++中，由于多态存在虚表，使用面向对象的方式实现迭代器，存在遍历时寻址的性能，
	因此应该采用模板这种静态多态的方式
	
	上面的写法是两种的综合，在其他语言中通常是面向对象的实现方式
	在C++中推荐模板的方式
*/