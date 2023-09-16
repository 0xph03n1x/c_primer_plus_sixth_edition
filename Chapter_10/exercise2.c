#include <stdio.h>
void copy_arr(double target1[], double src[], int size);
void copy_ptr(double target2[], double src[], int size);
void copy_ptrs(double target3[], double src[], double last_src[]);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    
    printf("Source array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.1lf ", source[i]);
    }
    printf("\n");

    copy_arr(target1, source, 5);

    printf("Target1 array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.1lf ", target1[i]);
    }
    printf("\n");

    copy_ptr(target2, source, 5);

    printf("Target2 array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.1lf ", target2[i]);
    }
    printf("\n");


    copy_ptrs(target3, source, source + 5); 

    printf("Target3 array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.1lf ", target2[i]);
    }
    printf("\n");


}

void copy_arr(double target1[], double src[], int size)
{
    for (int i = 0; i < size; i++) {
        target1[i] = src[i];
    }
}

void copy_ptr(double target2[], double src[], int size)
{
    for (int j = 0; j < size; j++) {
        *(target2 + j) = *(src + j);
    }
}

void copy_ptrs(double target3[], double src[], double last_src[])
{
    double * k;
    int l;
    for (k = src, l = 0; k < last_src; k++, l++) {
        *(target3 + l) = *(src + l);
    }
}
