/*
exercise7.c

Write a program that reads a single word into a character array and then prints the word backward. Hint: Use strlen() ( Chapter 4 ) to compute the index of the last character in the array.
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[30];
	int i;

	printf("Enter single word: ");
	scanf("%s", word);

	for (i = strlen(word); i >= 0; i--)
	{
		printf("%c", word[i]);
	}

	return 0;
}