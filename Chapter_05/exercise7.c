/*
exercise7.c

Write a program that requests a type double number and prints the value of the number cubed. Use a function of your own design to cube the value and print it. The main() program should pass the entered value to this function.
*/
#include <stdio.h>

void cubed(double n);

int main(void)
{
	double num;

	printf("Enter number type double: ");
	scanf("%lf", &num);
	cubed(num);

	return 0;
}

void cubed(double n)
{
	double result;
	result = n * n *n;
	printf("%lf", result);
}