/* getsputs.c == using gets() and puts() */
#include <stdio.h>
#define STLEN 81

int main(void)
{
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);

    return 0;
}
