#include <stdio.h>

int main(void)
{
	int aList[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int nTotal = 0;
	int i = 0, j = 0;
	int *pList = (int *)aList;
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			nTotal += aList[i][j];

	printf("%d\n", nTotal);
	nTotal = 0;
	
	for (i = 0; i < 12; i++)
		nTotal += pList[i];

	printf("%d\n", nTotal);
	nTotal = 0;
	
	for (i = 0; i < 12; i++)
		nTotal += ((int *)aList)[i];

	printf("%d\n", nTotal);
	nTotal = 0;

	for (i = 0; i < 12; i++)
		nTotal += aList[0][i];

	printf("%d\n", nTotal);
	nTotal = 0;

	return 0;
}


