/*
ソリューションの切り替えは
スタートアッププロジェクトに設定を押す

再帰関数
#include <stdio.h>

int Recursive(int n) {
	if (n<=1)
	{
		return 1;
	}
	return (n * Recursive(n - 1));
}

int main() {
	int n = 10; //階乗する値(10の階乗)
	int result;	//計算結果

	result = Recursive(n);
	printf("%dの階乗=%d\n", n, result);

	return 0;
}


課題
#include <stdio.h>
//一般的な賃金体系は時給1072円

void Recursive(int n, int t) {
	t++;
	if (n < 1072)
	{

		printf("%d\n", t);
		printf("%d\n", n);

		Recursive(n * 2 - 50, t);
	}


	if (n>1072)
	{
		printf("%d時間働けば　時給は%d円で元が取れる\n", t, n);
	}
	else
	{
		printf("%d時間働いても　時給は%d円で足りない\n", t, n);
	}
}

int main() {
	int n = 100;		//最初の時給
	int timecount = 0;	//スタート時間

	Recursive(n, timecount);
	return 0;
}
*/