/* intconv.c == some mismatched integer conversion */
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short: %hd %hu\n", num, num);
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	printf("num as int and char: %d %c\n", num, num);
	printf("WORDS as int, short and char: %d %hd %c\n", WORDS, WORDS, WORDS);

	return 0;

	/*
	Looking at the first line, you can see that both %hd and %hu produce 336 as output for the variable num; no problem there. On the second line, the %u (unsigned) version of mnum came out
	as 65200, however, not as the 336 you might have expected; this results from the way that
	signed short int values are represented on our reference system. First, they are 2 bytes in size.
	Second, the system uses a method called the two’s complement to represent signed integers. In
	this method, the numbers 0 to 32767 represent themselves, and the numbers 32768 to 65535
	represent negative numbers, with 65535 being −1, 65534 being −2, and so forth. Therefore,
	−336 is represented by 65536 - 336, or 65200. So 65200 represents −336 when interpreted as
	a signed int and represents 65200 when interpreted as an unsigned int. Be wary! One number
	can be interpreted as two different values. Not all systems use this method to represent negative
	integers. Nonetheless, there is a moral: Don’t expect a %u conversion to simply strip the sign
	from a number. 
	*/
}