// electric.c == calculates electric bill
#include <stdio.h>
#define RATE1 0.13230		// rate for first 350 kwh
#define RATE2 0.15040		// rate for next 108 kwh
#define RATE3 0.30025		// rate for next 252 kwh
#define RATE4 0.34025		// rate for over 720 kwh
#define BREAK1 360.0
#define BREAK2 468.0
#define BREAK3 720.0
#define BASE1 (RATE1 * BREAK1)
// cost for 360 kwh
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
// cost for 468 kwh
#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))
// cost for 720 kwh
int main(void)
{
	double kwh;			// kilowatt-hours used
	double bill;		// charges

	printf("Please enter the kwh used.\n");
	scanf("%lf:", &kwh);

	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if (kwh <= BREAK3)
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else
		bill = BASE3 + (RATE4 * (kwh - BREAK3));
	printf("The chage for %.1f kwh is $%1.2f.\n", kwh, bill);

	return 0;
}