/* exercise9.c */
#include <stdio.h>
void Temperatures(double frnht);

int main(void)
{
	double farenheit;
	printf("Please enter temperature in Farenheit (q quit): ");
	while(scanf("%lf", &farenheit) == 1)
	{
		Temperatures(farenheit);
		printf("Please enter temperature in Farenheit (q quit): ");
	}

	printf("bye\n");

	return 0;
}

void Temperatures(double frnht)
{
	double celsius, kelvin;
	const double C_TO_K = 273.16;
	const double F_TO_C = 5.0 / 9.0;
	const double F_TO_C2 = 32.0;
	celsius = F_TO_C * (frnht - F_TO_C2);
	kelvin = celsius + C_TO_K;
	printf("Farenheit %.2f is %.2f Celsius and %.2f Kelvin.\n", frnht, celsius, kelvin);
}