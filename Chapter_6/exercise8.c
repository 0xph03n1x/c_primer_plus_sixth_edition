/*
exercise8.c

Write a program that requests two floating-point numbers and prints the value of their difference divided by their product. Have the program loop through pairs of input values until the user enters nonnumeric input. 

SUM – The sum is the result of adding two or more numbers.
DIFFERENCE – The difference of two numbers is the result of subtracting these two numbers.
PRODUCT – The product of two or more numbers is the result of multiplying these numbers.
QUOTIENT – The quotient of two numbers is the result of the division of these numbers.
*/
#include <stdio.h>
int main(void)
{
	float one, two;

	printf("Enter two floating-point numbers: ");
	while(scanf("%f%f", &one, &two) == 2)
	{
		printf("Difference of the two values divided by their product: %.2f\n", (one - two) / (one * two));
		printf("Enter another two floating-point numbers (q to quit): ");

	}
	printf("bye\n");

	return 0;
}
