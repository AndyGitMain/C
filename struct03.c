#include <stdio.h>

struct DATAFLAG {
	unsigned char main : 1;
	unsigned char left : 2;
	unsigned char right : 3;
	unsigned char top : 2;
};

int main(void)
{
	struct DATAFLAG flag = { 0, 3, 7, 3 };

	printf("%d\n", flag.main);
	printf("%d\n", flag.left);
	printf("%d\n", flag.right);
	printf("%d\n", flag.top);
	printf("%x\n", *((unsigned char *)&flag));
	printf("%d\n", (int)sizeof(flag));
	printf("%x\n", *(&flag));
	return 0;
}

