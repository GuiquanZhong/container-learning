//#include <iostream>
//using namespace std;
//#include<vector>;
//#include<deque>;
//#include<string>;
//#include<algorithm>
//#include<ctime>;
//
//
////创建类存放名字与分数
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
////往v中存放数据
//void createPerson(vector<Person>&v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
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
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)//有多少人打分多少次
//	{
//		deque<int>d;//为计算平均分做准备
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;    //60~100
//			d.push_back(score);
//		}
//		cout << " 选手：" << it->m_Name << "打分" << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit << " ";
//
//		}
//		cout << endl;
//
//		//去除最高最低分
//		sort(d.begin(), d.end());
//
//		d.pop_front();
//		d.pop_back();
//
//		//取平均分
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
//		cout << "姓名：" << it->m_Name << " 平均分 " << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1.创建5名选手
//	vector<Person>v;
//	createPerson(v);
//
//	//测试
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "姓名: " << (*it).m_Name << "分数： " << (*it).m_Score << endl;
//	//}
//
//	//2.给5名选手打分
//	setScore(v);
//	
//
//	//3.显示最后得分
//	showScore(v); 
//	system("pause");
//	return 0;
//}