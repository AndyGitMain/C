#include <stdio.h>

int main(void)
{
	int nTall;

	printf("Input your tall (cm) : ");
	scanf("%d", &nTall);
	getchar();

	printf("You are %s.\n", (nTall >= 150) ? "pass" : "fail");
	return 0;
}


