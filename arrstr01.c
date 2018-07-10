#include <stdio.h>

int main(void)
{
	// initialize string buffer
	int aList[5] = { 1, 2, 3, 4, 5 };
	char szBuffer[6] = { 'H', 'e', 'l', 'l', 'o' };
	char szData[6] = { "Hello" };
	char *pszBuffer = "Hello";

	puts(szBuffer);
	puts(szData);
	puts(pszBuffer);

	return 0;
}


