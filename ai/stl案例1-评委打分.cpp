//#include <iostream>
//using namespace std;
//#include<vector>;
//#include<deque>;
//#include<string>;
//#include<algorithm>
//#include<ctime>;
//
//
////�����������������
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//
//	}
//
//
//	string m_Name;
//	int m_Score;
//};
//
////��v�д������
//void createPerson(vector<Person>&v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//		v.push_back(p);
//	}
//}
//
//
//
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)//�ж����˴�ֶ��ٴ�
//	{
//		deque<int>d;//Ϊ����ƽ������׼��
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;    //60~100
//			d.push_back(score);
//		}
//		cout << " ѡ�֣�" << it->m_Name << "���" << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit << " ";
//
//		}
//		cout << endl;
//
//		//ȥ�������ͷ�
//		sort(d.begin(), d.end());
//
//		d.pop_front();
//		d.pop_back();
//
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//
//		}
//		int avg = sum / d.size();
//		
//		it->m_Score = avg;
//	}
//
//}
//
//void showScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << it->m_Name << " ƽ���� " << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1.����5��ѡ��
//	vector<Person>v;
//	createPerson(v);
//
//	//����
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "����: " << (*it).m_Name << "������ " << (*it).m_Score << endl;
//	//}
//
//	//2.��5��ѡ�ִ��
//	setScore(v);
//	
//
//	//3.��ʾ���÷�
//	showScore(v); 
//	system("pause");
//	return 0;
//}