#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;

    while((ch = getchar()) != EOF)
    {
        count++;
    }
    printf("The number of characters in the input is %d.\n", count);

    return 0;
}
