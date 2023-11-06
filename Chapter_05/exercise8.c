/* exercise8.c */
#include <stdio.h>
int main(void)
{
	int op1, op2, result;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &op2);
	printf("Now enter the first operand: ");
	scanf("%d", &op1);

	while(op1 > 0)
	{
		result = op1 % op2;
		printf("%d %c %d is %d\n", op1, '%', op2, result);
		printf("Enter number for first operand (<= 0 to quit): ");
		scanf("%d", &op1);
	}
	printf("Done\n");

	return 0;
}