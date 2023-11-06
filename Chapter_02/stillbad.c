/* stillbad.c == program with syntax error fixed, but with semantic erorrs */
#include <stdio.h>

int main(void)
{
	int n, n2, n3;
	
	/* Variable n3 is set to n2 squared when it should be n * n2. Corrected in the code below. */

	n = 5;
	n2 = n * n;
	n3 = n * n2;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
}