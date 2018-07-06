#include <stdio.h>

int main(void)
{
	const int rate = 1000;
	int nAge = 0;
	double nFee = rate;
	
	printf("Input Age : ");
	scanf("%d", &nAge);
	
	if(nAge < 20) {
		nFee = rate * 0.75;
	}

	printf("Your fee is %.1f\n", nFee);

	return 0;
}


