#include <stdio.h>


int main(void)
{
	int aList[3] = { 0 };

	printf("aList          : %x\n", aList);
	printf("aList + 1      : %x\n", aList + 1);
	printf("&aList         : %x\n", &aList);
	printf("&aList + 1     : %x\n", &aList + 1);
	printf("&aList[0]      : %x\n", &aList[0]);
	printf("&aList[0] + 1  : %x\n", &aList[0] + 1);
	
	return 0;
}



