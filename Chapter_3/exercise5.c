/*
exercise5.c

There are approximately 3.156 × 10 7 seconds in a year. Write a program that requests
your age in years and then displays the equivalent number of seconds. 
*/
#include <stdio.h>
int main(void)
{
	float year = 3.156e7;
	float age;

	printf("Enter your age in years: ");
	scanf("%f", &age);
	printf("Your age of %f in seconds is %f", age, age * year);

	return 0;
}