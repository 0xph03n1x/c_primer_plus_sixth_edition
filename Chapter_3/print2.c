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
	printf("verybig = %lld and not %ld\n", verybig, verybig);	

	/*
	To produce the same result as the one in the book the %ld has to be changed to %d:

	Result with %ld - verybig = 12345678908642 and not 12345678908642
	Result with %d - verybig = 12345678908642 and not 1942899938

	Windows returns the expected result for %ld (1942899938).
	Does this mean the long int in linux is actually 8 bytes (64 bit) on a 64-bit system, whereas Windows lont int is 4 bytes (32 bits)? 


	Apparently yes - https://www.intel.com/content/www/us/en/developer/articles/technical/size-of-long-integer-type-on-different-architecture-and-os.html

	*/

	return 0;
}