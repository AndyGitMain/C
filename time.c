#include <stdio.h>
#include <stdio_ext.h>

int main(void)
{
	FILE *fp = stdin;
	int nHour, nMin, nSec, nInput;

	printf("Input seconds : ");
	scanf("%d\n", &nInput);
	__fpurge(fp);
	
	nSec = nInput;
	nHour = nSec / (60 * 60);
	nMin = (nSec - (nHour * 60 * 60)) / 60;
	nSec = nSec % 60;

	printf("%d sec is %02d hour %02d min %02d sec\n", nInput, nHour, nMin, nSec);
	return 0;
}
