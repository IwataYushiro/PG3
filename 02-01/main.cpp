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