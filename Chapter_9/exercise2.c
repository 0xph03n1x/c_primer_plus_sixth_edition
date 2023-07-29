#include <stdio.h>

void chline(char ch, unsigned int i, unsigned int j);

int main(void) {
    char ch;
    unsigned int x, y;

    printf("Enter a character and to numbers:\n");
    while (scanf("%c %u %u", &ch, &x, &y) == 3) {
        chline(ch, x, y);

        while (getchar() != '\n') continue;

        printf("\nEnter a character and two integers:\n");
    }

    return 0;
}

void chline(char ch, unsigned int i, unsigned int j) {
    for (int col = 1; col < i; col++) {
        putchar(' ');
    }
    for (int col; col <= j; col++) {
        putchar(ch);
    }
}
