#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <functional>

typedef void (*pfunc)(int*, char*);

//�R�[���o�b�N�֐�

void SetTimeout(pfunc p, int second, char* str)
{
	//�R�[���o�b�N�֐����Ăяo��
	Sleep(second * 1000);

	p(&second, str);
}

int main(void) {

	

	std::function<int(int)> fx = [](int i) {return i; };

	printf("��(����)�Ȃ�����@��(�)�Ȃ��Ɠ��͂��Ă�\n");

	char str[5];
	scanf_s("%s", str, 5);
	printf("�\�z�� %s\n\n", str);

	//�����ŃR�[���o�b�N�֐����Ăяo��
	pfunc p;

	p = [](int* s, char str[])
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
	};

	SetTimeout(p, fx(3), str);
	
	return 0;
}