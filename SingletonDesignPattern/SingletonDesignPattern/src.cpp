#include<iostream>
#include<mutex>
using namespace std;

/*
	����ģʽ������ģʽ&&����ģʽ
	����ģʽ��Ϊһ��Ŀ����ȷ���ṹ�򵥣�������׵����ģʽ�������������ʹ��Ƶ�ʷǳ���

	���ó�����
	��1��ϵͳֻ��Ҫһ��ʵ��������ϵͳҪ���ṩһ��Ψһ�����к�����������Դ��������������Ҫ������Դ����̫���ֻ������һ������
	��2���ͻ�������ĵ���ʵ��ֻ����ʹ��һ���������ʵ㣬���˸ù������ʵ㣬����ͨ������;�����ʸ�ʵ����
	*/

/*����ģʽ
	һ��ʼ�ͳ�ʼ������
	˽�й��캯����ɾ����������
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
		cout << "��������ģʽ" << count << endl;
	}
	HungrySignal(const HungrySignal& obj) = delete;
	static int count;
	static HungrySignal hungrySignal;
};
HungrySignal HungrySignal::hungrySignal;
int HungrySignal::count = 0;


/*����ģʽ
	ֻ��ʹ�õ�ʱ��Ŵ�������
	˽�й��캯����ɾ����������
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
		cout << "����ģʽ" << count << endl;
	}
	LazySignal(const LazySignal& obj) = delete;
};
 LazySignal *LazySignal::obj_ptr = nullptr;
 int LazySignal::count = 0;
 mutex LazySignal::mtx;