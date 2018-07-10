#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int nSize = 5;
	int nCounter = 1;
	int row = 0, col = -1;
	int inc = 1;              // 1 or -1
	int i, j;
	
	while (nSize > 0) {
		for (i = 0; i < nSize; i++) {
			col += inc;
			aList[row][col] = nCounter++;
		}

		nSize--;
		if (nSize == 0)
			break;

		for (i = 0; i < nSize; i++) {
			row += inc;
			aList[row][col] = nCounter++;
		}
		inc *= -1;
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		printf("\n");
	}

	return 0;
}

