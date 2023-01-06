/*
exercise8.c

Write a program that asks the user to enter the number of miles traveled and the number of gallons of gasoline consumed. It should then calculate and display the miles-per-gallon value, showing one place to the right of the decimal. 
Next, using the fact that one gallon is about 3.785 liters and one mile is about 1.609 kilometers, it should convert the mileper-gallon value to a liters-per-100-km value, the usual European way of expressing fuel consumption, and display the result, showing one place to the right of the decimal. Note that the U. S. scheme measures the distance traveled per amount of fuel (higher is better), whereas the European scheme measures the amount of fuel per distance (lower is better). Use symbolic constants (using const or #define) for the two conversion factors.
*/
#include <stdio.h>

int main(void)
{
	float miles, gallons, miles_per_gallon, liters_per_100km;
	const float KM = 1.609;
	const float LT = 3.785;

	printf("Enter number of miles travelled:\n");
	scanf("%f", &miles);
	printf("Enter gallons of gasoline consumed:\n");
	scanf("%f", &gallons);
	miles_per_gallon = miles / gallons;
	printf("For %.1f miles travelled and %.1f gallons consumed,the miles-per-gallon is %.1f\n", miles, gallons, miles_per_gallon);
	liters_per_100km = 100. / miles_per_gallon * LT / KM;
	printf("Converted in European measurements: for %.1f kilometers travelled and %.1f liters consumed, the liters-per-100-km is %.1f\n", miles * KM, gallons * LT, liters_per_100km);

	return 0;
}