#include <stdio.h>
#include <stdlib.h>

int* make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void) {
  int* pa;
  int size;
  int value;

  printf("Enter number of elements: ");
  while (scanf("%d", &size) == 1 && size > 0) {
    printf("Enter the initialization value: ");
    scanf("%d", &value);
    pa = make_array(size, value);
    if (pa) {
      show_array(pa, size);
      free(pa);
    }
    printf("Enter the number of elements (<1 to quit): ");
  }
  printf("Done\n");
  return 0;
}

int* make_array(int elem, int val) {
  int* arr = (int*)malloc(elem * sizeof(int));
  for (int i = 0; i < elem; i++) {
    *(arr + i) = val;
  }
  return arr;
}

void show_array(const int ar[], int n) {
  int cnt = 0;
  for (int j = 0; j < n; j++) {
    printf("%d", ar[cnt]);
    cnt++;
    if (cnt % 8 == 0) {
      puts("");
    }
  }
  puts("");
}
