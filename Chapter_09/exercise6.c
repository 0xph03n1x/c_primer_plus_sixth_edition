#include <stdio.h>
void reorder(double *n1, double *n2, double *n3);

int main() {
    double num1, num2, num3;

    printf("Enter three numbers:\n");
    while (scanf("%lf%lf%lf", &num1, &num2, &num3) == 3) {
        printf("Initial values num1 = %.2lf, num2 = %.2lf, num3 = %.2lf\n", num1, num2, num3);
        reorder(&num1, &num2, &num3);
        printf("New values num1 = %.2lf, num2 = %.2lf, num3 = %.2lf\n", num1, num2, num3);
        printf("Enter three numbers:\n");
    }

    return 0;
}

void reorder(double *n1, double *n2, double *n3) {
    double temp;
    if (*n1 < *n2 && *n1 < *n3) {
        if (*n2 > *n3) {
            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
    }else if (*n2 < *n1 && *n2 < *n3) {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
        if (*n2 > *n3) {
            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
    }else {
        temp = *n1;
        *n1 = *n3;
        *n3 = temp;
        if (*n2 > *n3) {
            temp = *n2;
            *n2 = *n3;
            *n3 = temp;
        }
    }
}
