/*
//main�֐��̃A�h���X��\��
#include <stdio.h>

int main(void) {

	printf("main = %p\n", main);

	return 0;
}

//�֐��|�C���^
#include <stdio.h>

//�g�p��
	void PrintHelloWorld()
	{
		printf("HELLO WORLD\n");
	}

	void PrintHelloween()
	{
		printf("HELLOWEEN\n");
	}

int main(void) {

	//�֐��|�C���^�̐錾
	void (*pfunc)();//void *pfunc()�@���ꂾ�ƃv���g�^�C�v�錾�ɂȂ�

	pfunc = PrintHelloWorld;
	printf("PrintHelloWorld�̃A�h���X = %p\n", PrintHelloWorld);

	pfunc();

	//�n���E�B���Ƀ`�F���W
	pfunc = PrintHelloween;
	printf("pfunc�̓��e = %p\n", pfunc);

	pfunc();

	return 0;
}

//�R�[���o�b�N�֐�
#include <stdio.h>
#include <Windows.h>

typedef void (*pfunc)(int*);

//�R�[���o�b�N�֐�
	void Callback1(int *s)
	{
		printf("%d�b��Ɏ��s\n", *s);
	}

	void SetTimeout(pfunc p,int second)
	{
		//�R�[���o�b�N�֐����Ăяo��
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
�ۑ�@������̔�r
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

typedef void (*pfunc)(int*, char*);

//�R�[���o�b�N�֐�
void Callback1(int* s, char str[])
{

	srand(time(NULL));
	int saikoro = rand() % 6 + 1;

	char tyou[] = "����";
	char han[] = "�";

	printf("��������̒l=%d\n", saikoro);

	//����
	if (saikoro % 2 == 0)
	{
		printf("��\n");

		if (strcmp(str, tyou) == 0)
		{
			printf("������I");
		}

	}
	//�
	else if (saikoro % 2 == 1)
	{
		printf("��\n");

		if (strcmp(str, han) == 0)
		{
			printf("������I");
		}

	}
}

void SetTimeout(pfunc p, int second, char* str)
{
	//�R�[���o�b�N�֐����Ăяo��
	Sleep(second * 1000);

	p(&second, str);
}

int main(void) {

	printf("��(����)�Ȃ�����@��(�)�Ȃ��Ɠ��͂��Ă�\n");

	char str[5];
	scanf_s("%s", str, 5);
	printf("�\�z�� %s\n\n", str);

	//�����ŃR�[���o�b�N�֐����Ăяo��
	pfunc p;
	p = Callback1;
	SetTimeout(p, 3, str);

	return 0;
}

*/