/* shoe2.c calculates foot lengths for several sizes */
#include <stdio.h>
#define ADJSUT 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	shoe = 3.0;
	while (shoe < 18.5)
	{
		foot = SCALE * shoe + ADJSUT;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe	+ 1.;
	}
	printf("If the shoe fits, wear it.\n");

	return 0;
}