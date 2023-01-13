/*
exercise6.c

Write a program that prints a table with each line giving an integer, its square, and its cube. Ask the user to input the lower and upper limits for the table. Use a for loop.
*/
#include <stdio.h>
int main(void)
{
	int min, max, i;

	printf("Enter lower integer limit: ");
	scanf("%d", &min);
	printf("Enter upper integer limit: ");
	scanf("%d", &max);

	for (i = min; i <= max; i++)
	{
		printf("%d integer, %d its square, %d its cube.\n", i, i * i, i * i *i);
	}

	return 0;
}