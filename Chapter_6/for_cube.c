/* for_cube.c == using a for loop to make a table of cubes */
#include <stdio.h>
int main(void)
{
	int num;

	printf("    n  	n cubes\n");
	for (num = 1; num <= 6; num++)
		printf("%5d %5d\n", num, num*num*num);

	return 0;
}