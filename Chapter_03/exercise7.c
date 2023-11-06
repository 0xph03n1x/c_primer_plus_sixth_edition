/*
exercise7.c

. There are 2.54 centimeters to the inch. Write a program that asks you to enter your
height in inches and then displays your height in centimeters. Or, if you prefer, ask for
the height in centimeters and convert that to inches. 
*/
#include <stdio.h>
int main(void)
{
	float height, inch_to_cm;
	inch_to_cm = 2.54;

	printf("Enter your height in inches: ");
	scanf("%f", &height);
	printf("Your height in inches %.1f is %.1f in centimiters", height, height * inch_to_cm);

	return 0;
}