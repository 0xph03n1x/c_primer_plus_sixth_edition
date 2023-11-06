#include <stdio.h>

int main(void) {
  int x = 30;  // original x

  printf("x in outer block: %d at %p\n", x, &x);
  {
    int x = 77;
    printf("x in inner block: %d at %p\n", x, &x);
  }
  printf("x in outer block: %d at %p\n", x, &x);
  while (x++ < 33) {  // ogirinal x
    int x = 100;      // new x, hides first x
    x++;
    printf("x in while loop: %d at %p\n", x, &x);
  }
  printf("x in outer block: %d at %p\n", x, &x);

  return 0;
}
