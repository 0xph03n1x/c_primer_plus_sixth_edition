// cypher1.c == alters input, preserving spaces
#include <stdio.h>
#define SPACE ' '		// that's quote-space-quote
int main(void)
{
	char ch;

	ch = getchar();
	while(ch != '\n')		// can be replaced with 
	{						// while ((ch = getchar()) != '\n')
		if (ch == SPACE)		// leave space
			putchar(ch);		// character unchaged
		else
			putchar(ch + 1);	// change other characters
		ch = getchar();			// get next character
	}
	putchar(ch);				// print newline

	return 0;
}