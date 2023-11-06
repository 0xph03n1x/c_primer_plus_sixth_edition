#include <stdio.h>

double min(double x, double y);

int main(void) {
    double x, y, smaller;

    printf("Enter two numbers:\n");
    scanf("%lf %lf", &x, &y);
    smaller = min(x, y);

    printf("The smaller value is %lf.\n", smaller);
    return 0;
}

double min(double x, double y) {
    return(x < y ? x : y);
}
