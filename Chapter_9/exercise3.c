#include <stdio.h>

void print_char(char ch, int number_time, int number_rows);

int main() {
    char ch;
    int num_times;
    int num_cols;

    printf("Enter a character, number of time, number of rows:\n");
    while (scanf("%c%d%d", &ch, &num_times, &num_cols) == 3) {
        print_char(ch, num_times, num_cols);
        printf("Enter a character, number of time, number of rows:\n");
    }

    return 0;
}

void print_char(char ch, int number_time, int number_rows) {
    for (int i = 0;i <= number_rows; i++) {
        for (int j = 0; j <= number_time; j++) {
            putchar(ch);
        }
        printf("\n");
    }
}
