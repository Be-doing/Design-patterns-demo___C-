#include<iostream>
#include<mutex>
using namespace std;

/*
	单例模式：懒汉模式&&饿汉模式
	单例模式作为一种目标明确，结构简单，理解容易的设计模式，在软件开发中使用频率非常高

	适用场景：
	（1）系统只需要一个实例对象，如系统要求提供一个唯一的序列号生成器或资源管理器，或者需要考虑资源消耗太大而只允许创建一个对象。
	（2）客户调用类的单个实例只允许使用一个公共访问点，除了该公共访问点，不能通过其他途径访问该实例。
	*/

/*饿汉模式
	一开始就初始化单例
	私有构造函数，删除拷贝构造
*/
class HungrySignal {

public:
	static HungrySignal& getObj() {
		return hungrySignal;
	}
//public:
//	HungrySignal& getObj() {
//		return hungrySignal;
//	}
private:
	HungrySignal() {
		++count;
		cout << "饿汉单例模式" << count << endl;
	}
	HungrySignal(const HungrySignal& obj) = delete;
	static int count;
	static HungrySignal hungrySignal;
};
HungrySignal HungrySignal::hungrySignal;
int HungrySignal::count = 0;


/*懒汉模式
	只有使用的时候才创建对象
	私有构造函数，删除拷贝构造
*/
class LazySignal {
public:
	static LazySignal& getObj() {
		if (obj_ptr == nullptr) {
			mtx.lock();
			if (obj_ptr == nullptr) {
				obj_ptr = new LazySignal();
			}
			mtx.unlock();
		}
		return *obj_ptr;
	}
private:
	static LazySignal *obj_ptr;
	static int count;
	static mutex mtx;
	LazySignal() {
		cout << "饿汉模式" << count << endl;
	}
	LazySignal(const LazySignal& obj) = delete;
};
 LazySignal *LazySignal::obj_ptr = nullptr;
 int LazySignal::count = 0;
 mutex LazySignal::mtx;