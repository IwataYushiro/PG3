#include <list>
#include <stdio.h>

using namespace std;	//これでstd::を省略可能

int main(void) {

	//コンテナ名
	list<const char*> yamanotesenn =
	{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata"
	};

	//1970年
	printf("-1970-\n");
	for (auto itr = yamanotesenn.begin();
		itr != yamanotesenn.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	//改行
	printf("\n");

	//2019年
	//1971年、田端の前に、日暮里の後に西日暮里が追加
	printf("-2019-\n");
	for (auto itr = yamanotesenn.begin();
		itr != yamanotesenn.end(); ++itr)
	{
		if (strcmp(*itr, "Tabata") == 0)
		{
			itr = yamanotesenn.insert(itr, "Nishi-Nippori");
			itr++;
			//brackでも可
		}
	}
	for (auto itr = yamanotesenn.begin();
		itr != yamanotesenn.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	//改行
	printf("\n");

	//2022年
	printf("-2022-\n");
	//2020年に高輪ゲートウェイが追加される
	yamanotesenn.push_back("Takanawa-Gateway");		
	
	for (auto itr = yamanotesenn.begin();
		itr != yamanotesenn.end(); itr++)
	{
		printf("%s\n", *itr);
	}
	
	//改行
	printf("\n");

	return 0;
}