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