// exercise7.c
#include <stdio.h>
#define BASE_RATE 10.0
#define OVERTIME 1.5
#define TAX_300 0.15
#define TAX_450 0.20
#define TAX_REST 0.25

int main(void)
{
	int hours, overtime_hrs = 0;
	float gross_p, net_p, taxes;

	printf("Enter number of hours for the week:\n");
	scanf("%d", &hours);

	if (hours <= 40){
		gross_p = hours * BASE_RATE;
	}
	else {
		overtime_hrs = hours - 40;
		gross_p = 40 * BASE_RATE + overtime_hrs * (BASE_RATE * OVERTIME);
	}

	if (gross_p > 450){

		net_p = (300 - 300 * TAX_300) + (150 - 150 * TAX_450) + ((gross_p - 450) - ((gross_p - 450) * TAX_REST));
		taxes = (300 * TAX_300) + (150 * TAX_450) + ((gross_p - 450) * TAX_REST);
	}
	else if (gross_p > 300 && gross_p <= 450) {
		net_p = (300 - 300 * TAX_300) + ((gross_p - 300) - (gross_p - 300) * TAX_450);
		taxes = (300 * TAX_300) + ((gross_p - 300) * TAX_450);
	}
	else if (gross_p <= 300) {
		net_p = gross_p - gross_p * TAX_300;
		taxes = gross_p * TAX_300;	
	}
	printf("Gross income: %.2f\n", gross_p);
	printf("Net income %.2f\n", net_p);
	printf("Taxes: %.2f\n", taxes);

	return 0;
}
