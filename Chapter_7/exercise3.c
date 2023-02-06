// exercise3.c
#include <stdio.h>
int main(void)
{
	int num, even, odd, sum_even, sum_odd, total;
	num = even = odd = sum_even = sum_odd = total = 0;
	float avg_even, avg_odd;

	printf("Enter numbers to analyze (enter 0 to quit):\n");
	while (scanf("%d", &num) == 1 && num != 0)
	{
		if (num % 2 == 0 && num != 0)
		{
			sum_even += num;
			even++;
			total++;
		}
		else
		{
			sum_odd += num;
			odd++;
			total++;
		}
	}
	avg_even = sum_even / even;
	avg_odd = sum_odd / odd;
	printf("Total even: %d, average of even: %.2f, total odd: %d, average odd: %2.f.\n", even, avg_even, odd, avg_odd);

	return 0;
}