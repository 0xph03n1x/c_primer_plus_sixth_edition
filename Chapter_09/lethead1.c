#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 99999"
#define WIDTH 40

void starbar(void);     /* prototype the function */

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}


void starbar(void)
{
    int count;

    for (count = 1; count <= WIDTH; count++) {
        putchar('*');
    }
    putchar('\n');
}
