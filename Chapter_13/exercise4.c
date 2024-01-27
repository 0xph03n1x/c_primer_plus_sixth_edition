#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int byte;
  FILE* src;
  int filecat;

  if (argc == 1) {
    printf("Usage: %s filename/s\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  for (filecat = 1; filecat < argc; filecat++) {
    if ((src = fopen(argv[filecat], "r")) == NULL) {
      printf("Could not open read file %s", argv[filecat]);
      continue;
    }
    while ((byte = getc(src)) != EOF) {
      putchar(byte);
    }
    if (fclose(src) != 0) {
      printf("Could not close file %s\n", argv[filecat]);
    }
  }

  return 0;
}
