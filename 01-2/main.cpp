#include <stdio.h>
//��ʓI�Ȓ����̌n�͎���1072�~

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
		printf("%d���ԓ����΁@������%d�~�Ō�������\n", t, n);
	}
	else
	{
		printf("%d���ԓ����Ă��@������%d�~�ő���Ȃ�\n", t, n);
	}
}

int main() {
	int n = 100;		//�ŏ��̎���
	int timecount = 0;	//�X�^�[�g����

	Recursive(n, timecount);
	return 0;
}