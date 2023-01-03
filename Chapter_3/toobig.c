/* toobig.c == exceeds int size on our system (integer overflow) */
#include <stdio.h>
int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n", i, i+1, i+2);
	printf("%u %u %u\n", j, j+1, j+2);

	return 0;

	/*
	The unsigned integer j is acting like a car’s odometer. When it reaches its maximum value,
	it starts over at the beginning. The integer i acts similarly. The main difference is that the
	unsigned int variable j, like an odometer, begins at 0, but the int variable i begins at
	–2147483648. Notice that you are not informed that i has exceeded (overflowed) its maximum
	value. You would have to include your own programming to keep tabs on that.
	The behavior described here is mandated by the rules of C for unsigned types. The standard
	doesn’t define how signed types should behave. The behavior shown here is typical, but you
	could encounter something different 
	*/
}