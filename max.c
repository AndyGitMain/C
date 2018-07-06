#include <stdio.h>

#define LEN 3

int main(void)
{
	int aInput[LEN] = { 0 };
	int nMax = 0;
	
	printf("Input three numbers : ");

	for(int i = 0; i < LEN; i++) {
		scanf("%d", &aInput[i]);
	}

	nMax = aInput[0];
	if(nMax < aInput[1])
		nMax = aInput[1];

	if(nMax < aInput[2])
		nMax = aInput[2];

	printf("Maxmum value is %d\n", nMax);

	
	return 0;
}


