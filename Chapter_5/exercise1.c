/*
exercise1.c

Write a program that converts time in minutes to time in hours and minutes. Use #define or const to create a symbolic constant for 60. Use a while loop to allow the user to enter values repeatedly and terminate the loop if a value for the time of 0 or less is entered.
*/
#include <stdio.h>
#define M_PER_H 60
int main(void)
{
	int hours, minutes, leftover;

	printf("Enter amount of minutes (<= 0 to quit):\n");
	scanf("%d", &minutes);
	while(minutes > 0)
	{
		hours = minutes / M_PER_H;
		leftover = minutes % M_PER_H;

		printf("In %d minutes, there are %d hours and %d minutes.\n", minutes, hours, leftover);
		printf("Enter next value (<= 0 to quit):\n");
		scanf("%d", &minutes);
	}

	printf("Done!\n");

	return 0;
}