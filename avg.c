#include <stdio.h>

int main(void)
{
	int nNum1, nNum2;

	printf("Input two numbers : ");
	scanf("%d %d", &nNum1, &nNum2);

	printf("%.2f\n", (nNum1 + nNum2) / 2.0);
	return 0;
}
