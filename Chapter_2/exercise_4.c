/*
Write a program that produces the following output:
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny! 
*/
#include <stdio.h>

void jolly(void);
void deny(void);

int main (void)
{
	for (int i = 0; i < 3; i++){
		jolly();
	}
	deny();

	return 0;
}

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");
}