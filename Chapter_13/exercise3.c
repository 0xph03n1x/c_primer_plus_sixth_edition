#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  char ch;
  FILE* src;
  FILE* target;

  if (argc != 3) {
    printf("Usage: %s source file target file\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  if ((src = fopen(argv[1], "r")) == NULL) {
    printf("Could not open file %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if ((target = fopen(argv[2], "wb")) == NULL) {
    printf("Could not open file %s for write\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  while ((ch = getc(src)) != EOF) {
    if (islower(ch)) {
      ch = toupper(ch);
    }
    putc(ch, target);
  }

  if (fclose(src) != 0) {
    printf("Could not close file %s\n", argv[1]);
  }
  if (fclose(target) != 0) {
    printf("Could not close file %s\n", argv[2]);
  }

  return 0;
}
