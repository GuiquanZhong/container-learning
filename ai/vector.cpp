//#include <iostream>
//#include<vector>
//using namespace std;
//
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it<<" ";
//
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	vector<int>v1;
//	//默认构造  无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	//printVector(v1);
//	////区间方式进行构造
//	//vector<int>v2(v1.begin(), v1.end());
//	//printVector(v2);
//
//	////m个elem方式构造
//	//vector<int>v3(10, 100);
//	//printVector(v3);
//	////拷贝构造
//	//vector<int>v4(v3);
//	//printVector(v3);
//	
//
//	//赋值操作
//	//vector<int>v5;
//	//v5 = v1;
//	//printVector(v5);
// 
//	//vector<int>v6;
//	//v6.assign(v1.begin(), v1.end());
//	//printVector(v6);
//	//vector <int>v7;
//	//v7.assign(10, 100);
//	//printVector(v7);
//
//
//
//	//vector容量和大小
//	//empty判断是否为空  capacity容器容量   size 返回元素个数
//	//resize(int num)重新指定长度为num；  resize（int nim ，elem）重指长度并填充elem；
//	//if (v1.empty())
//	//{
//	//	cout << "v1为空" << endl;
//	//}
//	//else 
//	//{
//	//	cout << "v1不为空" << endl;
//	//	cout << "v1的容量为：" << v1.capacity() << endl;
//	//	cout << "v1的大小为： " << v1.size() << endl;
//	//}
//	////重新指定大小
//	//v1.resize(15,4);//利用重载版本，可以指定默认填充值，不加则默认0；
//	//printVector(v1);
//
//	//插入和删除
//	//尾插法
//	//v1.push_back(101);
//	//printVector(v1);
//	////尾删
//	//v1.pop_back();
//	//printVector(v1);
// 
//	////插入  第一个参数是迭代器
//	//v1.insert(v1.begin(), 100);
//	//printVector(v1);
//	////重载插入
//	//v1.insert(v1.begin(), 2,103);
//	//printVector(v1);
//
//
//
//	////删除
//	//v1.erase(v1.begin());
//	//printVector(v1);
//	////全部删除
//	//v1.erase(v1.begin(), v1.end());
//	//printVector(v1); 
//
//
//	//数据存取
//	//利用【】访问
//	//for (int i = 0; i < v1.size(); i++)
//	//{
//	//	cout << v1[i] << " ";
//	//}
//	//cout << endl;
//	////利用at（）访问
//	//for (int i = 0; i < v1.size(); i++)
//	//{
//	//	cout << v1.at(i) << " ";
//	//}
//	////访问第一个元素
//	//cout << "第一个元素为" << v1.front() << endl;
//	//cout << "最后一个元素为" << v1.back() << endl;
//
//	//互换容器
//	//1、基本使用
//	//printVector(v1);
//	//vector<int>v9;
//	//for (int i = 0; i < 11; i++)
//	//{
//	//	v9.push_back(i);
//	//}
//	//printVector(v9);
//	//cout << "交换后：" << endl;
//	//v1.swap(v9);
//	//printVector(v1);
//	//printVector(v9);
//
//	////2\实际用途
//	////巧用swap可以收缩内存空间
//	//vector<int>(v1).swap(v1);//利用匿名对象
//
//	//	vector 预留空间
//	 //v1.reserve(10000);
//
//}
//int main()
//{
//	test01();
//
//
//
//	return 0;
//}