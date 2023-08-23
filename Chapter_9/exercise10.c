#include <stdio.h>
void to_base_n(unsigned long n, unsigned int m);

int main(void) {
    unsigned long number;
    unsigned int base;
    printf("Enter an integer and representation betwen 2 and 10 (q to quit):\n");
    while (scanf("%lu%d", &number, &base) == 2) {
        if (base <2 || base >10) {
            printf("Enter a valid base number\n");
        }
        printf("Base-%d equivalent: ", base);
        to_base_n(number, base);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n(unsigned long n, unsigned int m) {
    int r;
    r = n % m;
    if (n >= m)
        to_base_n(n / m, m);
    putchar('0' + r);
    return;
}
