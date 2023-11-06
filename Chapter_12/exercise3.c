// compile with pe12-2a.c
#include <stdio.h>

#include "pe12-3a.h"

int main(void) {
  int mode;
  int prev = METRIC;
  double distance, fuel;

  printf("Enter 0 for metric mode, 1 for US mode: ");
  scanf("%d", &mode);
  while (mode >= 0) {
    check_mode(&mode);
    if (mode == RECENT) {
      mode = prev;
    }
    get_info(mode, &distance, &fuel);
    show_info(mode, distance, fuel);
    printf("Enter 0 for metric mode, 1 for US mode");
    printf(" (-1 to quit): ");
    scanf("%d", &mode);
  }

  printf("Done.\n");
  return 0;
}
