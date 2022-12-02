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
		printf("D‚«‚È”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n“ü—Í‚µ‚½’l@");

		scanf_s("%d", &val);

		Create(&head, val);

		Index(&head);
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
		printf("%d\n", startcell->val);
		
	}
	printf("\n");
}
