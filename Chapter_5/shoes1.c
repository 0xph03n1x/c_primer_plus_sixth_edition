/* shoes1.c == converts a shoe size to inches */
#include <stdio.h>
#define ADJSUT 7.31 		//one kind of symbolic constants
int main(void)
{
	const double SCALE = 0.333;		//another kind
	double shoe, foot;

	shoe = 9.0;
	foot = SCALE * shoe + ADJSUT;
	printf("Shoe size (men's)    foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);

	return 0;

}