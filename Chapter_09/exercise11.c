#include <stdio.h>

void Fibonacci(int n);

int main(void) {
    int n;

    printf("Enter an integer number to get preceeding Fibonacci numbers:\n");
    scanf("%d", &n);
    Fibonacci(n);
    printf("\n");

    return 0;
}

void Fibonacci(int n) {
    int Fn = 0;
    int Fn1 = 0;
    int Fn2 = 1;
    int c = 0;

    printf("All Fibonacci numbers smaller than %d are: \n", n);

    while (Fn < n) {
        printf("%d", Fn);
        printf(", ");
        Fn = Fn1 + Fn2;
        if(c % 2 == 0)
            Fn1 = Fn;
        else
            Fn2 = Fn;
        c++;
    }
}
