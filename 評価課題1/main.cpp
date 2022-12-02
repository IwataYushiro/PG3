#include <stdio.h>
#include <stdlib.h>

typedef struct cell {

	int val;
	struct cell* next;

}CELL;

void Create(CELL *endcell,int buf);

void Index(CELL* startcell);

int main(void) {

	int val;
	
	CELL head;
	head.next = nullptr;
	while (true)
	{
		printf("好きな数字を入力してください\n入力した値　");

		scanf_s("%d", &val);

		printf("\n");

		Create(&head, val);

		Index(&head);

		printf("\n");
	}

	return 0;
}

void Create(CELL* endcell, int buf)
{
	CELL *newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	newCell->val = buf;
	newCell->next = nullptr;

	while (endcell->next != nullptr)
	{
		endcell = endcell->next;
	}

	endcell->next = newCell;
}

void Index(CELL* startcell)
{
	while (startcell->next != nullptr)
	{
		startcell = startcell->next;
		printf("%d ,", startcell->val);
		
	}
	printf("\n");
}
