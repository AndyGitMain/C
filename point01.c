#include <stdio.h>

int main(void)
{
	int aList[3] = { 0, 1, 2 };
	int *paList = aList;

	printf("aList         = 0x%x\n", aList);
	printf("aList + 1     = 0x%x\n", aList + 1);
	printf("paList        = 0x%x\n", paList);
	printf("paList + 1    = 0x%x\n", paList + 1);
	printf("*paList       = %d\n", *paList);
	printf("*(paList + 1) = %d\n", *(paList + 1));
	printf("paList[1]     = %d\n", paList[1]);
	printf("*(paList + 1) <== 5\n", *(paList + 1) = 5);
	printf("*(paList + 1) = %d\n", *(paList + 1));
	
	return 0;
}

