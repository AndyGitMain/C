#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int i, j, nCounter = 0;
	bool nFlag = 1;
	
	for (i = 0; i < 5; i++) {
		if (nFlag) {
			for (j = 0; j < 5; j++)
				aList[i][j] = ++nCounter;
			nFlag = 0;
		} else {
			for (j = 0; j < 5; j++)
				aList[i][4 - j] = ++nCounter;
			nFlag = 1;
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		printf("\n");
	}

	return 0;
}


