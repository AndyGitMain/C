#include <stdio.h>

int main(void)
{
	int x = 10;

	// int * int -> %d
	printf("%d\n", x * 10);

	// int * double -> %d (It's not possible to output)
	printf("%d\n", x * 10.0);

	// int / int -> int
	printf("%d\n", x / 10);

	// int / int -> int (We can't use %f)
	printf("%d\n", 5 / 2);

	printf("%f\n", 5 / 2);

	// double / int -> double
	printf("%f\n", 5.0 / 2);
	
	
	return 0;
}
