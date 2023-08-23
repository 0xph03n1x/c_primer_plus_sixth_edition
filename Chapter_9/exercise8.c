#include <stdio.h>
#include <math.h>

double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power of %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");

	return 0;
}

double power(double n, int p) {
	double pow = 1;
	int i;

	if (p > 0) {
		for (i = 1; i <= p; i++) {
			pow *= n;

		if (n == 0)
			pow = 0;
		}
	}else if (p < 0) {
		for(i = -1; i >= p; i--)
			pow /= n;
		if (n == 0)
			pow = 0;
	}else if (p == 0 && n == 0) {
		printf("0 to the power of 0 is undefined and it's using a value of 1.\n");
		pow = 1;
	}else {
	    pow = 1;
	}

	return pow;
}
