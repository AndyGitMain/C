#include <stdio.h>


// clear one bit
#define clear_bit(data, loc)         ((data) &= ~(0x1 << (loc)))
// clear bits
#define clear_bits(data, area, loc)  ((data) &= ~((area) << (loc)))

// set one bit
#define set_bit(data, loc)           ((data) |= (0x1 << (loc)))
// set bits
#define set_bits(data, area, loc)    ((data) |= ((area) << (loc)))

// invert one bit
#define invert_bit(data, loc)        ((data) ^= (0x1 << (loc)))
// invert bits
#define invert_bits(data, area, loc) ((data) ^= ((area) << (loc)))

// check one bit
#define check_bit(data, loc)         ((data) & (0x1 << (loc)))

#define ADD(X)                       ((X) + (X))
#define SQUARE(X)                    ((X) * (X))

int main(void)
{
	printf("%08X\n", 0xFF >> 4);
	printf("%08X\n", 0xFF << 4);
	printf("%08X\n", 0xA & 0x5);
	printf("%08X\n", 0xA | 0x5);
	printf("%08X\n", 0xA ^ 0x5);
	printf("%08X\n", ~0xCC);

	// set specific bits
	int nBit = 0x33333333;
	printf("%08X\n", nBit |= 0x00000004);
	printf("%08X\n", nBit |= 0x1 << 3);
	printf("%08X\n", nBit |= (0x1 << 6) + (0x1 << 7));
	
	// clear specific bits
	nBit = 0xAA;
	printf("%08X\n", nBit &= ~(0x1 << 3));
	printf("%08X\n", nBit &= ~((0x1 << 1) + (0x1 << 5)));

	// invert specific bits
	nBit = 0xAA;
	printf("%08X\n", nBit ^= 0x1 << 3);

	// inspect speific bits
	nBit = 0xAA;
	printf("%08X\n", nBit & (0x1 << 3));

	printf("============================\n");
	int nData = 0xAA;
	printf("clear one bit   : %08X\n", clear_bit(nData, 1));
	printf("clear bits      : %08X\n", clear_bits(nData, 0x3, 2));
	printf("set one bit     : %08X\n", set_bit(nData, 2));
	printf("set bits        : %08X\n", set_bits(nData, 0x5, 1));
	printf("invert one bit  : %08X\n", invert_bit(nData, 0));
	printf("invert bits     : %08X\n", invert_bits(nData, 0x3, 2));
	printf("check one bit   : %08X\n", check_bit(nData, 5));

	printf("ADD(5)          : %d\n", ADD(5));
	printf("SQUARE(5)       : %d\n", SQUARE(5));
	
	return 0;
}






