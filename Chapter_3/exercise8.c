/*
exercise8.c

In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
and teaspoons. Why does a floating-point type make more sense for this application than
an integer type? 
*/
#include <stdio.h>
int main(void)
{
	float cups;
	float cups_per_pint = 0.5;
	float ounces_per_cup = 8;
	float tblspoons_per_cup = 2 * ounces_per_cup;
	float teaspoons_per_cup = 3 * tblspoons_per_cup;

	printf("Enter amount of cups: ");
	scanf("%f", &cups);
	printf("%f cups.\n", cups);
	printf("%f pints.\n", cups * cups_per_pint);
	printf("%f ounces.\n", cups * ounces_per_cup);
	printf("%f table spoons.\n", cups * tblspoons_per_cup);
	printf("%f tea spoons.\n", cups * teaspoons_per_cup);

	return 0;

}