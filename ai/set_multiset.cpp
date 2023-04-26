////set/multiset容器：关联式容器，元素被插入时自动排序
////set不允许容器中有重复元素
////multiset允许容器中有重复元素
//
//#include<iostream>
//using namespace std;
//#include<set>///两个容器只要包含一个set
//#include<string>
//
//void printSet(set<int>s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it <<  " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	//插入数据  只有insert方式
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(40);
//	printSet(s1);
//
//
//	//set容器特点：所有元素插入被自动排序
//	//set容器不允许插入重复值
//	//printSet(s1);
//
//	////拷贝构造
//	//set<int>s2(s1);
//	//printSet(s2);
//
//	////赋值
//	//set<int>s3;
//	//s3 = s2;
//	//printSet(s3);
//
//	//大小和交换与vector基本相同，但不能重新指定大小（
//	//（因为不能有重复值）
//	//size（），empty（），  swap（）
//
//	//插入和删除
//	//insert  clear   erase（pos）删除pos处的元素，返回下一位置迭代器
//	//earse(x)删除与x匹配的元素
//
//	//查找和统计
//	//find（key），查找key元素是否存在，存在返回迭代器位置，不存在返回end（）
//	//count（key）统计key元素个数
//
//	//pair
//	pair<set<int>::iterator, bool>ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//	printSet(s1);
//	multiset<int>ms;
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//pair对组创建
//	//第一种方式
//	pair<string,int>p1("10", 20);
//	cout << sizeof(p1.first) <<" "<< sizeof(p1.second)<< endl;
//	cout << sizeof(p1) << endl;
//
//	//第二种方式
//	pair<string, int>p2 = make_pair("jerry", 30);
//	cout << p2.first << " " << p2.second << endl;
//
//	//set容器排序
//	//默认从小到大
//	// set<int,Mycompare>v
//	//class Mycompare      用这个从大到小排
//	//{
//	//	public：
//	//		bool operator（）（int v1，int v2）
//	//	{
//	//		return v1 > v2;
//	//	}
//	//}
//
//
//}
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}