#include <ctype.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
  char mode = 'p';
  int ok = 1;
  int ch;

  if (argc != 2) {
    printf(
        "Error: %s usage:\n"
        "%s -p <input text> - print input as is\n"
        "%s -u <input text> - Map input to all uppercase\n"
        "%s -l <input text> - Map input to all lowercase\n",
        argv[0], argv[0], argv[0], argv[0]);
    ok = 0;
  } else if (argc == 2) {
    if (argv[1][0] != '-') {
      printf("Usage: %s [-p | -u | -l]\n", argv[0]);
      ok = 0;
    } else {
      switch (argv[1][1]) {
        case 'p':
        case 'u':
        case 'l':
          mode = argv[1][1];
          break;
        default:
          printf("%s is an invalid flag; ", argv[1]);
          printf("using default flat (-p).\n");
      }
    }
  }
  if (ok) {
    while ((ch = getchar()) != EOF) {
      switch (mode) {
        case 'p':
          putchar(ch);
          break;
        case 'u':
          putchar(toupper(ch));
          break;
        case 'l':
          putchar(tolower(ch));
      }
    }
  }
  return 0;
}
