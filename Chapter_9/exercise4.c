#include <stdio.h>

void harmonic_mean(double num1, double num2);

int main() {
    double number1 = 0;
    double number2 = 0;

    printf("Enter two digits to find their harmonic mean (q to quit):\n");
    while (scanf("%lf%lf", &number1, &number2) == 2) {
        harmonic_mean(number1, number2);
        printf("Enter two digits to find their harmonic mean (q to quit):\n");
    }
    
    return 0;
}

void harmonic_mean(double num1, double num2) {
    double inverse1 = 0;
    double inverse2 = 0;
    double sum = 0;
    double result = 0;

    inverse1 = 1 / num1;
    inverse2 = 1 / num2;
    sum = inverse1 + inverse2;
    result = 1 / (sum / 2);
    printf("The harmonic means of %lf and %lf is %lf.\n", num1, num2, result);
}
