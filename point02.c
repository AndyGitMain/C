#include <stdio.h>

int main(void)
{
	int aList[3] = { 10, 20, 30 };
	int *paData = aList;
	int nTotal = 0;

	for (int i = 0; i < 3; i++)
		nTotal += aList[i];
	printf("%d\n", nTotal);
	
	nTotal = 0;
	while (paData < aList + 3) {
		nTotal += *paData;
		paData++;
	}
	printf("%d\n", nTotal);
	return 0;
}


