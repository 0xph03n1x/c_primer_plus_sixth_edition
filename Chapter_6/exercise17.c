// exercise17.c
#include <stdio.h>
int main(void)
{
	const float INTEREST = 0.08f;
	const float withdrawal = 100000.0f;
	float balance = 1000000.0f;
	int years = 0;

	while (balance > 0)
	{
		balance -= withdrawal;
		balance *= 1.0f + INTEREST;
		years++;
	}
	printf("It takes %d years for Chucky to reach %.2f balance.\n", years, balance);

	return 0;
}