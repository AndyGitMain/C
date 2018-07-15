#include <stdio.h>

int main(void)
{
	char arrList[3][12] = { "Hello", "world", "String" };
	char (*parrList)[12] = arrList;
	char *astrList[3] = { "Hello", "world", "String" };
	char *pastrList[3] = { arrList[0], arrList[1], arrList[2] };

	printf("%s\n", arrList[0]);     // Hello
	printf("%s\n", arrList[1]);     // World
	printf("%s\n", arrList[2]);     // String

	printf("%s\n", parrList[0]);    // Hello
	printf("%s\n", parrList[1]);    // World
	printf("%s\n", parrList[2]);    // String

	printf("%s\n", parrList + 0);   // Hello
	printf("%s\n", parrList + 1);   // World
	printf("%s\n", parrList + 2);   // String
	
	printf("%s\n", astrList[0]);    // Hello
	printf("%s\n", astrList[1]);    // World
	printf("%s\n", astrList[2]);    // String

	printf("%c\n", *astrList[0]);   // H
	printf("%c\n", *astrList[1]);   // W
	printf("%c\n", *astrList[2]);   // S

	printf("%s\n", pastrList[0]);   // Hello
	printf("%s\n", pastrList[1]);   // World
	printf("%s\n", pastrList[2]);   // String

	return 0;
}



