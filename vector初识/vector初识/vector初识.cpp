#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//vector�������������������
void myPrint(int val)
{
	cout << val << endl;
}
void test01()
{
	//����һ��vector���������飩,��ͨ��ģ�����ָ�������д�ŵ���������
	vector<int>v;
	//�������з�����
	v.push_back(20);
	//ͨ�����������������е����ݡ��õ�vector<int>���������ĵ���������
	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�ص���һ��λ��

	//��һ�ֱ�����ʽ
	//while (itBegin != itEnd)
	//{
		//cout << *itBegin << endl;
		//itBegin++;
	//}
	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	//�����ֱ�����ʽ()
	//for_each(v.begin(), v.end(), myPrint);

}
int main()
{
	test01();
	system("pause");
	return 0;
}