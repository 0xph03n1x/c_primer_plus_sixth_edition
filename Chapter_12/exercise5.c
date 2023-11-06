#include <stdio.h>
#include <stdlib.h>
#define NUM 100

void print_arr(const int arr[], int size);
void sort(int arr[], int size);

int main(void) {
  int arr[NUM];

  for (int i = 0; i <= NUM; i++) {
    arr[i] = rand() % 10 + 1;
  }
  puts("Initial array:");
  print_arr(arr, NUM);
  puts("Sorted array:");
  sort(arr, NUM);
  print_arr(arr, NUM);

  return 0;
}

void print_arr(const int arr[], int size) {
  int index;
  for (index = 0; index < size; index++) {
    printf("%2d ", arr[index]);
    if (index % 10 == 9) {
      putchar('\n');
    }
  }
  if (index % 10 != 0) {
    putchar('\n');
  }
}

void sort(int arr[], int size) {
  int top, search, temp;

  for (top = 0; top < size; top++) {
    for (search = top + 1; search < size; search++) {
      if (arr[search] > arr[top]) {
        temp = arr[search];
        arr[search] = arr[top];
        arr[top] = temp;
      }
    }
  }
}
