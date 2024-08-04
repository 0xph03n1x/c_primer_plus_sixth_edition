#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int btoi(char* st);
char* itob(char* st, int n);
void show_bstr(const char* st);

int main(int argc, char* argv[]) {
  int n1, n2;
  char bin_st[CHAR_BIT * sizeof(int) + 1];

  if (argc != 3) {
    fprintf(stderr, "The number of arguments is wrong\n");
    exit(EXIT_FAILURE);
  }
  n1 = btoi(argv[1]);
  n2 = btoi(argv[2]);
  show_bstr(itob(bin_st, ~n1));
  show_bstr(itob(bin_st, ~n2));
  show_bstr(itob(bin_st, n1 & n2));
  show_bstr(itob(bin_st, n1 | n2));
  show_bstr(itob(bin_st, n1 ^ n2));

  return 0;
}

int btoi(char* st) {
  int num = 0;

  while (*st) num = (num << 1) + (*st++ - '0');

  return num;
}

char* itob(char* st, int n) {
  int i;
  const static int size = CHAR_BIT * sizeof(int);

  for (i = size - 1; i >= 0; i--, n >>= 1) st[i] = (01 & n) + '0';
  st[size] = '\0';

  return st;
}

void show_bstr(const char* st) {
  int i = 0;

  while (st[i]) {
    putchar(st[i]);
    if (++i % 4 == 0 && st[i]) putchar(' ');
  }
  printf("\n");
}
