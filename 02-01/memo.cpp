/*
//vector(�ϒ��z��)
#include <stdio.h>
#include <stdlib.h>		//system
#include <vector>		//vector

using namespace std;	//�����std::���ȗ��\

int main(void) {

	vector<int> b;//int�^������z�񃊃X�g

	//�v�f����10�ɕύX(0�ŏ����������)
	//b.resize(10);

	b.push_back(40);
	b.push_back(50);
	b.push_back(77);
	b.pop_back();
	b.push_back(100);
	//�v�f�����擾
	int size = b.size();

	//�v�f��S�ĕ\��
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", b[i]);
	}

	system("pause");

	return 0;
}

//�C�e���[�^(�����q)

	vector<int> e = { 1,2,3 };

	vector<int>::iterator it;

	//it = e.begin();

	//cout << *it << endl;

	//it++;

	//cout << *it << endl;

	for (it = e.begin(); it != e.end(); it++)
	{
		cout << *it << endl;
	}

	system("pause");

//string�^�̉ϒ��z��
	vector<string> f = { "���[�\��","�t�@�~�}","�Z�u��"};

	for (vector<string>::iterator it = f.begin(); it != f.end(); it++)
	{
		cout << *it << endl;
	}

	system("pause");

	//�o�������X�g

	//list<int> lst(33,4);
	list<int> lst{ 114, 514,364 };//�����ݒ胊�X�g

	lst.push_front(7);
	lst.push_back(777);

	for (int i = 0; i < 5; i++)
	{
		lst.push_front(i);
	}

	for (int i = 0; i < 5; i++)
	{
		lst.push_back(i);
	}

	std::list<const char*>

	#include <list>

using namespace std;	//�����std::���ȗ��\

int main(void) {

	//list<int> lst(33,4);
	list<int> list{ 1,4,5,6,9 };//�����ݒ胊�X�g

	for (std::list<int>::iterator itr=list.begin(); itr != list.end(); ++itr)
	{
		if (*itr==4)
		{
			itr = list.insert(itr, 0);
			++itr;		//�d�v
		}
	}
	return 0;
}
*/