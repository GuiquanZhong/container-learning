//#include <iostream>
//using namespace std;
////map������Ԫ�ض���pair��pair�е�һ��Ϊkep���ڶ���Ϊvalue
//#include<map>
////map��kep�����ظ�  multimap�����ظ�
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
//	//���뷽ʽ
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(10, 1740));
//	m.insert(map<int, int>::value_type(30, 90));
//	m[4] = 5;//�����飬�����ڲ���Ԫ��
//	printMap(m);
//
//	//���  clear();
//	//m.clear();
//	//printMap(m);
//
//	//ɾ��
//	//m.erase(10);//ɾ��keyΪ10��Ԫ�أ�
//	//printMap(m);
//	//m.erase(m.begin());//ɾ��������Ԫ��
//	//printMap(m);
//	//m.erase(m.begin(), m.end());//ɾ������Ԫ��
//	//printMap(m);
//
//	//��С�ͽ���   empty   size swap
//
//	//���Һ�ͳ��
//	//find(key) ���ڷ��ص������������ڷ���m.end()
//	map<int,int>::iterator  pos = m.find(10);
//	cout << pos->second << endl;
//	//count(key)ͳ��key����
//	int pos1 = m.count(10);
//	cout << pos1;
//
//	//����
//	//���÷º���
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