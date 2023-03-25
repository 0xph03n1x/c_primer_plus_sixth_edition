#include <stdio.h>

int main()
{
	int number;
	int i = 2;
	printf("Enter a positive integer: ");
	scanf("%d", &number);

	while(i < number) 
	{
		if(i % 2 != 0 && i % 3 != 0)
		{
			printf("%d\n", i);
			i++;
		}
		else {
			i++;
			continue;
		}
	}
}
