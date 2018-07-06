#include <stdio.h>

int main(void)
{
	const int rate = 1000;
	int nAge = 0;
	double nFee = rate;
	
	printf("Input your age : ");
	scanf("%d", &nAge);
	
	if(nAge < 14) {
		if(nAge < 4) {
			nFee = rate * 0;
		} else {
			nFee = rate * 0.5;
		}
	} else {
		if(nAge < 20) {
			nFee = rate * 0.75;
		}
	}

	printf("Your fee is %.1f\n", nFee);

	return 0;
}




