////set/multiset����������ʽ������Ԫ�ر�����ʱ�Զ�����
////set���������������ظ�Ԫ��
////multiset�������������ظ�Ԫ��
//
//#include<iostream>
//using namespace std;
//#include<set>///��������ֻҪ����һ��set
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
//	//��������  ֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(40);
//	printSet(s1);
//
//
//	//set�����ص㣺����Ԫ�ز��뱻�Զ�����
//	//set��������������ظ�ֵ
//	//printSet(s1);
//
//	////��������
//	//set<int>s2(s1);
//	//printSet(s2);
//
//	////��ֵ
//	//set<int>s3;
//	//s3 = s2;
//	//printSet(s3);
//
//	//��С�ͽ�����vector������ͬ������������ָ����С��
//	//����Ϊ�������ظ�ֵ��
//	//size������empty������  swap����
//
//	//�����ɾ��
//	//insert  clear   erase��pos��ɾ��pos����Ԫ�أ�������һλ�õ�����
//	//earse(x)ɾ����xƥ���Ԫ��
//
//	//���Һ�ͳ��
//	//find��key��������keyԪ���Ƿ���ڣ����ڷ��ص�����λ�ã������ڷ���end����
//	//count��key��ͳ��keyԪ�ظ���
//
//	//pair
//	pair<set<int>::iterator, bool>ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
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
//	//pair���鴴��
//	//��һ�ַ�ʽ
//	pair<string,int>p1("10", 20);
//	cout << sizeof(p1.first) <<" "<< sizeof(p1.second)<< endl;
//	cout << sizeof(p1) << endl;
//
//	//�ڶ��ַ�ʽ
//	pair<string, int>p2 = make_pair("jerry", 30);
//	cout << p2.first << " " << p2.second << endl;
//
//	//set��������
//	//Ĭ�ϴ�С����
//	// set<int,Mycompare>v
//	//class Mycompare      ������Ӵ�С��
//	//{
//	//	public��
//	//		bool operator������int v1��int v2��
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