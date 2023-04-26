//#include <iostream>
//using namespace std;
////map中所有元素都是pair，pair中第一个为kep，第二个为value
//#include<map>
////map中kep不能重复  multimap可以重复
//
//void printMap(const map<int, int>m)
//{
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << (*it).first << " " << it->second << endl;
//	}
//}
//void test01()
//{
//	map<int, int>m;
//	//插入方式
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(10, 1740));
//	m.insert(map<int, int>::value_type(30, 90));
//	m[4] = 5;//不建议，多用于查找元素
//	printMap(m);
//
//	//清空  clear();
//	//m.clear();
//	//printMap(m);
//
//	//删除
//	//m.erase(10);//删除key为10的元素；
//	//printMap(m);
//	//m.erase(m.begin());//删除迭代器元素
//	//printMap(m);
//	//m.erase(m.begin(), m.end());//删除区间元素
//	//printMap(m);
//
//	//大小和交换   empty   size swap
//
//	//查找和统计
//	//find(key) 存在返回迭代器，不存在返回m.end()
//	map<int,int>::iterator  pos = m.find(10);
//	cout << pos->second << endl;
//	//count(key)统计key个数
//	int pos1 = m.count(10);
//	cout << pos1;
//
//	//排序
//	//利用仿函数
//	//class Mycompare
//	//{
//	//public:
//	//	bool operator()(int v1, int v2)
//	//	{
//	//		return v1 > v2;
//	//	}
//
//	//}
//	//map<int,int,Mycompare>m1;
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


#include<iostream>

using namespace std;

class Sample
{
public:
    Sample(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Sample operator+(Sample& p1)
    {
        this->a = p1.a;
        return *this;
    }
    int a;
    int b;
};



int main() {
    Sample a(1, 2), b(4, 9);
    a + b;
    cout << a.a << " " << a.b;
    return 0;
}