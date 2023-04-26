//#include <iostream>
//using namespace std;
//#include <deque>
//#include<algorithm>
//
//void printDeque(const deque<int>d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//构造操作与 vector基本相同
//	//1.拷贝 基本 多个 区间
//
//	//赋值操作与vector基本相同
//	//assign
//
//	//插入和删除
//	//比vector多了头删和头插操作
//	//头插
//	//d1.push_front(100);
//	//printDeque(d1);
//	////头删
//	//d1.pop_front();
//	//printDeque(d1);
//	////insert插入
//	//// 
//	////*区间插入
//	//deque<int>d2(2, 30);
//	//d1.insert(d1.begin()+3, d2.begin(), d2.end());
//	//printDeque(d1);
//	//
//	////删除  基本和vector一样
//	////清空
//	//d2.clear();
//	//printDeque(d2);
//
//	
//	//数据存取操作  基本和vector一样   at  【】；front  back 
//
//
//	//deque排序
//	// //支持随机访问的迭代器的容器，都可以利用sort算法进行排序
//	//sort从小到大
//	deque<int>d3;
//	d3.push_back(14);
//	d3.push_back(5);
//	d3.push_back(9);
//	d3.push_back(75);
//	printDeque(d3);
//	sort(d3.begin(), d3.end());
//	printDeque(d3);
//}
//
//int main()
//{
//	test01();
//	
//
//
//	system("pause");
//	return 0;
//}