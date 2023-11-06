// exercise14.c
#include <stdio.h>
#define MAX_SIZE 8
int main(void)
{
	double arr1[MAX_SIZE];
	double arr2[MAX_SIZE];
	double sum;

	printf("Enter eight numbers: ");

	for (int i = 0; i < MAX_SIZE; i++)
	{
		scanf("%lf", &arr1[i]);
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		sum += arr1[i];
		arr2[i] = sum;
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf("First array position %d is %lf\n", i, arr1[i]);
		printf("Second array position %d is %lf\n\n", i, arr2[i]);
	}

	return 0;
}