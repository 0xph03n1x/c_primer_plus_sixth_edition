#include <stdio.h>

void store(int size, int length, double arr[size][length]);
void report(int size, int length, double arr[size][length]);
double avg_in_array(int length, double arr[][length], int index);
double avg_all(int length, double arr[][length]);
double largest_all(int length, double arr[][length]);

int main(void)
{
    int size = 0;
    int length = 0;
    printf("Enter the size of the array of arrays:\n");
    scanf("%d", &size);
    printf("Enter the length of the one dimensional arrays\n");
    scanf("%d", &length);
    double arr[size][length];
    
    store(size, length, arr);

    report(size, length, arr);
}

void store(int size, int length, double arr[size][length])
{
    for (int i = 0 ; i < size; i++) {
            printf("Please enter five doubles for array number %d:\n", i + 1);
            for (int j = 0; j < length; j++) {
                scanf("%lf", &arr[i][j]);
            }
        }
}

double avg_in_array(int length, double arr[][length], int index)
{
    double total = 0;

    for (int l = 0; l < length; l++) {
        total += arr[index][l];
    }

    total /= length;

    return total;
}

double avg_all(int length, double arr[][length])
{
    double average = 0;
    double total = 0;

    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < length; n++) {
            total += arr[m][n];
        }
    }
    average = total / 15;

    return average;
}

double largest_all(int length, double arr[][length])
{
    double largest = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < length; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    return largest;
}

void report(int size, int length, double arr[][length])
{
    for (int k = 0; k < 3; k++) {
        printf("Array %d's average is %.2lf\n", k + 1, avg_in_array(length, arr, k));
    }

    printf("The average for all %d elements is %.2lf\n", size * length, avg_all(length, arr));

    printf("The largest of all elements is %.2lf\n", largest_all(length, arr));
}
