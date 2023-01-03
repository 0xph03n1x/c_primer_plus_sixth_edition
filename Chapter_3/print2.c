/* print2.c == more printf() properties*/
#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;	//system with 32-bit int
	short end = 200;				//system with 16-bit short
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %d\n", verybig, verybig);	

	/*
	To produce the same result as the one in the book the %ld has to be changed to %d:

	Result with %ld - verybig = 12345678908642 and not 12345678908642
	Result with %d - verybig = 12345678908642 and not 1942899938
	*/

	return 0;
}