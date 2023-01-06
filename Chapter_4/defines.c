/* defines.c == uses defined constatns from limit.h and float.h */
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	printf("Some number limite for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on the system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsipol = %e\n", FLT_EPSILON);
}