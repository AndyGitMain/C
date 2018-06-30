#include <stdio.h>
#include <stdio_ext.h>     // __fpurge()

int main(void)
{
	FILE *fp = stdin;
	int nAge = 0;
	char szName[32] = {0};

	printf("Input your age : ");
	scanf("%d", &nAge);

	//fflush(stdout);
	__fpurge(fp);

	printf("Input your name : ");
	fgets(szName, sizeof(szName), fp);
	

	return 0;
}












