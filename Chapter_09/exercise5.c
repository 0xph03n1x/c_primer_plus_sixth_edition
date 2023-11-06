#include <stdio.h>

void larger_of(double *num1, double *num2);

int main() {
    double n1 = 0;
    double n2 = 0;

    printf("Enter two numbers to find the larger of the two:\n");
    while (scanf("%lf%lf", &n1, &n2) == 2) {
        printf("Starting values are %lf and %lf\n", n1, n2);
        larger_of(&n1,&n2);
        printf("Now they are %lf and %lf\n", n1, n2);
        printf("Enter two numbers to find the larger of the two:\n");
    }
}

void larger_of(double *num1, double *num2) {
    if (*num1 > *num2) {
        *num2 = *num1;
    }else {
        *num1 = *num2;
    }
}
