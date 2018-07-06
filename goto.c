#include <stdio.h>

int main(void)
{
	int nAge;

	printf("Input your age : ");
	scanf("%d", &nAge);

	if (nAge < 0) {
		goto ERROR;
	}

	printf("Your age is %d\n", nAge);
	return 0;

 ERROR:
	printf("ERROR!!!\n");
	return -1;
}

