#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main(void)
{
	int *pList = NULL;

	pList = (int *)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);

	pList[0] = 10;
	pList[1] = 20;
	pList[2] = 30;

	printf("%d\n", (int)malloc_usable_size(pList));

	free(pList);
	return 0;
}


