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
//	//Ĭ�Ϲ���  �޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	//printVector(v1);
//	////���䷽ʽ���й���
//	//vector<int>v2(v1.begin(), v1.end());
//	//printVector(v2);
//
//	////m��elem��ʽ����
//	//vector<int>v3(10, 100);
//	//printVector(v3);
//	////��������
//	//vector<int>v4(v3);
//	//printVector(v3);
//	
//
//	//��ֵ����
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
//	//vector�����ʹ�С
//	//empty�ж��Ƿ�Ϊ��  capacity��������   size ����Ԫ�ظ���
//	//resize(int num)����ָ������Ϊnum��  resize��int nim ��elem����ָ���Ȳ����elem��
//	//if (v1.empty())
//	//{
//	//	cout << "v1Ϊ��" << endl;
//	//}
//	//else 
//	//{
//	//	cout << "v1��Ϊ��" << endl;
//	//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	//	cout << "v1�Ĵ�СΪ�� " << v1.size() << endl;
//	//}
//	////����ָ����С
//	//v1.resize(15,4);//�������ذ汾������ָ��Ĭ�����ֵ��������Ĭ��0��
//	//printVector(v1);
//
//	//�����ɾ��
//	//β�巨
//	//v1.push_back(101);
//	//printVector(v1);
//	////βɾ
//	//v1.pop_back();
//	//printVector(v1);
// 
//	////����  ��һ�������ǵ�����
//	//v1.insert(v1.begin(), 100);
//	//printVector(v1);
//	////���ز���
//	//v1.insert(v1.begin(), 2,103);
//	//printVector(v1);
//
//
//
//	////ɾ��
//	//v1.erase(v1.begin());
//	//printVector(v1);
//	////ȫ��ɾ��
//	//v1.erase(v1.begin(), v1.end());
//	//printVector(v1); 
//
//
//	//���ݴ�ȡ
//	//���á�������
//	//for (int i = 0; i < v1.size(); i++)
//	//{
//	//	cout << v1[i] << " ";
//	//}
//	//cout << endl;
//	////����at��������
//	//for (int i = 0; i < v1.size(); i++)
//	//{
//	//	cout << v1.at(i) << " ";
//	//}
//	////���ʵ�һ��Ԫ��
//	//cout << "��һ��Ԫ��Ϊ" << v1.front() << endl;
//	//cout << "���һ��Ԫ��Ϊ" << v1.back() << endl;
//
//	//��������
//	//1������ʹ��
//	//printVector(v1);
//	//vector<int>v9;
//	//for (int i = 0; i < 11; i++)
//	//{
//	//	v9.push_back(i);
//	//}
//	//printVector(v9);
//	//cout << "������" << endl;
//	//v1.swap(v9);
//	//printVector(v1);
//	//printVector(v9);
//
//	////2\ʵ����;
//	////����swap���������ڴ�ռ�
//	//vector<int>(v1).swap(v1);//������������
//
//	//	vector Ԥ���ռ�
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