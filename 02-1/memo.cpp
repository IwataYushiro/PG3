/*
//main関数のアドレスを表示
#include <stdio.h>

int main(void) {

	printf("main = %p\n", main);

	return 0;
}

//関数ポインタ
#include <stdio.h>

//使用例
	void PrintHelloWorld()
	{
		printf("HELLO WORLD\n");
	}

	void PrintHelloween()
	{
		printf("HELLOWEEN\n");
	}

int main(void) {

	//関数ポインタの宣言
	void (*pfunc)();//void *pfunc()　これだとプロトタイプ宣言になる

	pfunc = PrintHelloWorld;
	printf("PrintHelloWorldのアドレス = %p\n", PrintHelloWorld);

	pfunc();

	//ハロウィンにチェンジ
	pfunc = PrintHelloween;
	printf("pfuncの内容 = %p\n", pfunc);

	pfunc();

	return 0;
}

//コールバック関数
#include <stdio.h>
#include <Windows.h>

typedef void (*pfunc)(int*);

//コールバック関数
	void Callback1(int *s)
	{
		printf("%d秒後に実行\n", *s);
	}

	void SetTimeout(pfunc p,int second)
	{
		//コールバック関数を呼び出す
		Sleep(second * 1000);

		p(&second);
	}

int main(void) {

	printf("start\n");

	pfunc p;
	p = Callback1;
	SetTimeout(p, 5);

	return 0;
}
課題　文字列の比較
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

typedef void (*pfunc)(int*, char*);

//コールバック関数
void Callback1(int* s, char str[])
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
}

void SetTimeout(pfunc p, int second, char* str)
{
	//コールバック関数を呼び出す
	Sleep(second * 1000);

	p(&second, str);
}

int main(void) {

	printf("丁(偶数)なら偶数　半(奇数)なら奇数と入力してね\n");

	char str[5];
	scanf_s("%s", str, 5);
	printf("予想は %s\n\n", str);

	//ここでコールバック関数を呼び出す
	pfunc p;
	p = Callback1;
	SetTimeout(p, 3, str);

	return 0;
}

*/