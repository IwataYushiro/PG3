#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell {

	char strBef[11];
	struct cell* next;

}CELL;

void Create(CELL *endcell,const char *buf);

void Index(CELL* startcell);

int main(void) {

	char strAft[11];
	
	CELL head;
	head.next = nullptr;
	while (true)
	{
		scanf_s("%s", strAft, 11);

		Create(&head, strAft);

		Index(&head);
	}

	return 0;
}

void Create(CELL* endcell, const char* buf)
{
	CELL *newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->strBef, 11, buf);

	newCell->next = nullptr;

	while (endcell->next != nullptr)
	{
		endcell = endcell->next;
	}

	endcell = newCell;
}

void Index(CELL* startcell)
{
	while (startcell->next!=nullptr)
	{
		startcell = startcell->next;
		printf("%s\n", startcell->strBef);
	}
}
