// //先进后出
//#include <iostream>
//using namespace std;
//#include <stack>
////栈stack  数据先进后出    数据只有一端出入
////进去叫入栈push    拿数据出去叫出栈pop
////栈不允许有遍历行为
////栈可以判断是否为空   也可返回元素个数
//
////top() 返回栈顶元素
//
//void test01()
//{
//	stack<int>s;
//	//入栈
//	s.push(10);
//	s.push(650);
//	s.push(60);
//	s.push(20);
//	cout << "栈的大小  " << s.size() << endl;
//	//只要栈不为空，查看栈顶，并且执行出栈操作
//	while (!s.empty())
//	{
//		//查看栈顶元素
//		cout << "栈顶元素为： " << s.top() << endl;
//
//
//		//出栈
//		s.pop();
//	}
//	cout << "栈的大小  " << s.size() << endl;
//
//}
//
//int main()
//{
//	test01();
//
//
//
//
//	system("pause");
//	return 0;
//}
