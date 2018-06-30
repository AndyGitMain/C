#include <stdio.h>

int main(void)
{
	FILE *fp = stdin;
	char szName[32] = {""};

	printf("Input your name : ");

	//gets_s(szName, sizeof(szName));
	//gets(szName);
	fgets(szName, sizeof(szName), fp);
	
	printf("Your name is ");
	puts(szName);
	
	return 0;
}



