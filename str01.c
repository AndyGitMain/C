#include <stdio.h>
#include <string.h>

int main(void)
{
	char szBuf[32] = { "I am a boy" };

	printf("Address of szBuf = 0x%x\n", szBuf);

	printf("Address of the position : 0x%x\n", strstr(szBuf, "am"));
	printf("Address of the position : 0x%x\n", strstr(szBuf, "boy"));

	printf("Index : %d\n", (int)(strstr(szBuf, "am") - szBuf));
	printf("Index : %d\n", (int)(strstr(szBuf, "boy") - szBuf));

	return 0;
}


