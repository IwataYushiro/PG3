#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <functional>

typedef void (*pfunc)(int*, char*);

//コールバック関数

void SetTimeout(pfunc p, int second, char* str)
{
	//コールバック関数を呼び出す
	Sleep(second * 1000);

	p(&second, str);
}

int main(void) {

	

	std::function<int(int)> fx = [](int i) {return i; };

	printf("丁(偶数)なら偶数　半(奇数)なら奇数と入力してね\n");

	char str[5];
	scanf_s("%s", str, 5);
	printf("予想は %s\n\n", str);

	//ここでコールバック関数を呼び出す
	pfunc p;

	p = [](int* s, char str[])
	{

		srand(time(NULL));
		int saikoro = rand() % 6 + 1;

		char tyou[] = "偶数";
		char han[] = "奇数";

		printf("さいころの値=%d\n", saikoro);

		//偶数
		if (saikoro % 2 == 0)
		{
			printf("丁\n");

			if (strcmp(str, tyou) == 0)
			{
				printf("当たり！");
			}

		}
		//奇数
		else if (saikoro % 2 == 1)
		{
			printf("半\n");

			if (strcmp(str, han) == 0)
			{
				printf("当たり！");
			}

		}
	};

	SetTimeout(p, fx(3), str);
	
	return 0;
}