#include <stdio.h>
#include <stdlib.h>
#define SLEN 81
int main(void) {
  char file[SLEN];
  char ch;
  FILE *fp;
  long position;

  puts("Enter the name of the file to be processed:");
  scanf("%80s", file);
  if ((fp = fopen(file, "r")) == NULL) { /* read-only mode   */
    printf("Can't open %s\n", file);
    exit(EXIT_FAILURE);
  }

  puts("Please enter a file position (negative or nonnumeric input to quit): ");
  while (scanf("%ld", &position) == 1 && position >= 0) {
    fseek(fp, position, SEEK_SET);
    ch = (char)getc(fp);
    while (ch != EOF && ch != '\n') {
      putc(ch, stdout);
      ch = (char)getc(fp);
    }
    putchar('\n');
    puts(
        "Please enter another file position (negative or nonnumeric input to "
        "quit): ");
  }
  fclose(fp);
  puts("Bye!");

  return 0;
}
