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
//	//��������� vector������ͬ
//	//1.���� ���� ��� ����
//
//	//��ֵ������vector������ͬ
//	//assign
//
//	//�����ɾ��
//	//��vector����ͷɾ��ͷ�����
//	//ͷ��
//	//d1.push_front(100);
//	//printDeque(d1);
//	////ͷɾ
//	//d1.pop_front();
//	//printDeque(d1);
//	////insert����
//	//// 
//	////*�������
//	//deque<int>d2(2, 30);
//	//d1.insert(d1.begin()+3, d2.begin(), d2.end());
//	//printDeque(d1);
//	//
//	////ɾ��  ������vectorһ��
//	////���
//	//d2.clear();
//	//printDeque(d2);
//
//	
//	//���ݴ�ȡ����  ������vectorһ��   at  ������front  back 
//
//
//	//deque����
//	// //֧��������ʵĵ�����������������������sort�㷨��������
//	//sort��С����
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