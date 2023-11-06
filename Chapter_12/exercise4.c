#include <stdio.h>

unsigned int counter = 0;

void call(void);

int main(void) {
  int times_to_call;
  printf("Enter the number of times the function should be called: ");
  scanf("%d", &times_to_call);
  for (int i = 0; i < times_to_call; i++) {
    counter++;
    call();
  }
  return 0;
}

void call(void) { printf("Function called %d times\n", counter); }
