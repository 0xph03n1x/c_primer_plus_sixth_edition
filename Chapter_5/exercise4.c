/* exercise4.c */
#include <stdio.h>
int main(void)
{
	float cm, inches, left;
	int feet;
	const float CM_PER_INCH = 2.54;
	const int INCH_PER_FOOT = 12;

	printf("Enter a height in centimeters: ");
	scanf("%f", &cm);

	while(cm > 0)
	{
		inches = cm / CM_PER_INCH;
		feet = (int) inches / 12;
		left = inches - feet * INCH_PER_FOOT;
		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, left);

		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &cm);
	}
	printf("bye\n");

	return 0;
}