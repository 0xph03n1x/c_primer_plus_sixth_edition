// exercise7.c
#include <stdio.h>
#define BASE_RATE 10.0
#define OVERTIME 15.0
#define TAX_1 300
#define TAX_2 450
#define TAX_300 0.15
#define TAX_450 0.20
#define TAX_REST 0.25

int main(void)
{
	int hours, overtime_hrs;
	float gross_p, net_p, taxes;

	printf("Enter number of hours for the week:\n");
	scanf("%d", &hours);








	printf("Gross income: %.2f\n", gross_p);
	printf("Net income %.2f\n", net_p);
	printf("Taxes: %.2f\n", taxes);

	return 0;
}