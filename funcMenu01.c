#include <stdio.h>
#include <stdlib.h>
// UI
int printMenu()
{
	int nInput = 0;
	printf("[1]New [2]Search [3]Print [4]Remove [0]EXit\n");
	scanf("%d", &nInput);
	return nInput;
}

int getAge()
{
	int nAge = 0;
	printf("Input your age : ");
	scanf("%d", &nAge);
	return nAge;
}

// Function
int getFee(int nAge)
{
	int nFee = 1000;
	if (nAge < 20)
		nFee /= 2;
	return nFee;
}

int main(void)
{
	int nMenu = 0, nAge = 0;
	
	while ((nMenu = printMenu()) != 0) {
		switch(nMenu) {
		case 1:
			nAge = getAge();
			printf("Fee is %d\n", getFee(nAge));
			break;
		default:
			break;
		}
	}
	
	return 0;
}


