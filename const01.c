#include <stdio.h>

int main(void)
{
	const int nCUTOFF = 70;
	int nInput = 0;

	printf("Input point : ");
	scanf("%d", &nInput);

	if (nInput >= nCUTOFF)
		printf("You are passed.\n");
	else
		printf("You are failed.\n");

	return 0;
}


