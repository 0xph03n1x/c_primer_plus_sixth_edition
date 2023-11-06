/*
You have just been employed by MacroMuscle, Inc. (Software for Hard Bodies). The
company is entering the European market and wants a program that converts inches
to centimeters (1 inch = 2.54 cm). The company wants the program set up so that it
prompts the user to enter an inch value. Your assignment is to define the program
objectives and to design the program (steps 1 and 2 of the programming process).
*/

/*
1. Get input from user
2. Conver inches to cm
*/

#include <stdio.h>

int main(void)
{
	int inches;
	
	printf("Enter inches to convert to cm: \n");
	scanf("%d", &inches);

	float converted = inches * 2.54;

	printf("Result in centimiters: %.2f.\n", converted);

	return 0;
}