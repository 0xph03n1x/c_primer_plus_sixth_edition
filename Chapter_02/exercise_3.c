// Write a program that converts your age in years to days and displays both values. At this point, don’t worry about fractional years and leap years.
#include <stdio.h>

int main(void)
{
	int age, total_days;
	age = 25;
	total_days = age * 365;

	printf("An age of %d is equal to %d days.\n", age, total_days);

	return 0;
}