#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 4096
#define SLEN 41

void append(FILE *src, FILE *dest);

int main(int argc, char *argv[]) {
  FILE *fa, *fs;
  int files = 0;
  int fct;

  if (argc < 3) {
    printf("Usage: %s appendfile sourcefile/s\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  if ((fa = fopen(argv[1], "a")) == NULL) {
    fprintf(stderr, "Can't open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  if (setvbuf(fa, NULL, _IOFBF, BUFFSIZE) != 0) {
    fputs("Can't create output buffer\n", stderr);
    exit(EXIT_FAILURE);
  }
  for (fct = 2; fct < argc; fct++) {
    if (strcmp(argv[fct], argv[1]) == 0)
      fputs("Can't append file to itself\n", stderr);
    else if ((fs = fopen(argv[fct], "r")) == NULL)
      fprintf(stderr, "Can't open %s\n", argv[fct]);
    else {
      if (setvbuf(fs, NULL, _IOFBF, BUFFSIZE) != 0) {
        fputs("Can't create output buffer\n", stderr);
        continue;
      }
      append(fs, fa);
      if (ferror(fs) != 0)
        fprintf(stderr, "Error in reading file %s.\n", argv[fct]);
      if (ferror(fa) != 0)
        fprintf(stderr, "Error in reading file %s.\n", argv[1]);
      fclose(fs);
      files++;
      printf("File %s appended.\n", argv[fct]);
    }
  }
  printf("Done. %d files appended.\n", files);
  fclose(fa);

  return 0;
}

void append(FILE *src, FILE *dest) {
  size_t bytes;
  static char temp[BUFFSIZE];

  while ((bytes = fread(temp, sizeof(char), BUFFSIZE, src)) > 0) {
    fwrite(temp, sizeof(char), bytes, dest);
  }
}
