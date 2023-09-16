#include <stdio.h>
#define SIZE 3
#define LENGTH 5

void store(double arr[SIZE][LENGTH]);
void report(double arr[][LENGTH]);
double avg_in_array(double arr[][LENGTH], int index);
double avg_all(double arr[][LENGTH]);
double largest_all(double arr[][LENGTH]);

int main(void)
{
    double arr[SIZE][LENGTH];
    
    store(arr);

    report(arr);
}

void store(double arr[SIZE][LENGTH])
{
    for (int i = 0 ; i < SIZE; i++) {
            printf("Please enter five doubles for array number %d:\n", i + 1);
            for (int j = 0; j < LENGTH; j++) {
                scanf("%lf", &arr[i][j]);
            }
        }
}

double avg_in_array(double arr[][LENGTH], int index)
{
    double total = 0;

    for (int l = 0; l < LENGTH; l++) {
        total += arr[index][l];
    }

    total /= LENGTH;

    return total;
}

double avg_all(double arr[][LENGTH])
{
    double average = 0;
    double total = 0;

    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < LENGTH; n++) {
            total += arr[m][n];
        }
    }
    average = total / 15;

    return average;
}

double largest_all(double arr[][LENGTH])
{
    double largest = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < LENGTH; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    return largest;
}

void report(double arr[][LENGTH])
{
    for (int k = 0; k < 3; k++) {
        printf("Array %d's average is %.2lf\n", k + 1, avg_in_array(arr, k));
    }

    printf("The average for all %d elements is %.2lf\n", SIZE * LENGTH, avg_all(arr));

    printf("The largest of all elements is %.2lf\n", largest_all(arr));
}
