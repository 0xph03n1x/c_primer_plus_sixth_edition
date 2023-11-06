/*
exercise6.c

The mass of a single molecule of water is about 3.0×10 -23 grams. A quart of water is
about 950 grams. Write a program that requests an amount of water, in quarts, and
displays the number of water molecules in that amount. 
*/
#include <stdio.h>
int main(void)
{
	float molecule_mass = 3.0e-23;
	float quart, quart_to_grams;
	quart_to_grams = 950.;

	printf("Enter amount of water in quarts: ");
	scanf("%f", &quart);
	printf("%1.f number of quarts is %1.f grams and has %f molecules.", quart, quart * quart_to_grams, quart * quart_to_grams / molecule_mass);

	return 0;
}