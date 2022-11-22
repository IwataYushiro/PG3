/*
//vector(可変長配列)
#include <stdio.h>
#include <stdlib.h>		//system
#include <vector>		//vector

using namespace std;	//これでstd::を省略可能

int main(void) {

	vector<int> b;//int型を入れる配列リスト

	//要素数を10個に変更(0で初期化される)
	//b.resize(10);

	b.push_back(40);
	b.push_back(50);
	b.push_back(77);
	b.pop_back();
	b.push_back(100);
	//要素数を取得
	int size = b.size();

	//要素を全て表示
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", b[i]);
	}

	system("pause");

	return 0;
}

//イテレータ(反復子)

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

//string型の可変長配列
	vector<string> f = { "ローソン","ファミマ","セブン"};

	for (vector<string>::iterator it = f.begin(); it != f.end(); it++)
	{
		cout << *it << endl;
	}

	system("pause");

	//双方向リスト

	//list<int> lst(33,4);
	list<int> lst{ 114, 514,364 };//初期設定リスト

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

using namespace std;	//これでstd::を省略可能

int main(void) {

	//list<int> lst(33,4);
	list<int> list{ 1,4,5,6,9 };//初期設定リスト

	for (std::list<int>::iterator itr=list.begin(); itr != list.end(); ++itr)
	{
		if (*itr==4)
		{
			itr = list.insert(itr, 0);
			++itr;		//重要
		}
	}
	return 0;
}
*/