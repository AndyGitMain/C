#include <stdio.h>

int getFactorial(int nParam)
{
	int nResult = 1;
	int i = 0;
	
	if (nParam < 1 || nParam > 10)
		return -1;

	for (i = 1; i <= nParam; i++)
		nResult *= i;

	return nResult;
}

int main(void)
{
	int nInput = 0;
	int nResult = 0;

	printf("Input the number between 1 and 10 : ");
	scanf("%d", &nInput);

	nResult = getFactorial(nInput);
	if (nResult == -1) {
		printf("Input number is wrong.\n");
		return -1;
	}

	printf("The result of %d's number is %d\n", nInput, nResult);
	return 0;
}


