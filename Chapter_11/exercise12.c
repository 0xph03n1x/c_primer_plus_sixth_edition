#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  char c;
  int low_ct = 0;
  int up_ct = 0;
  int dig_ct = 0;
  int word_cnt = 0;
  int punct_cnt = 0;
  bool inword = false;

  printf("Enter text to be analyzed (EOF to exit):\n");
  while ((c = getchar()) != EOF) {
    if (islower(c)) {
      low_ct++;
    } else if (isupper(c)) {
      up_ct++;
    } else if (isdigit(c)) {
      dig_ct++;
    } else if (ispunct(c)) {
      punct_cnt++;
    }
    if (isspace(c) && !inword) {
      inword = true;
      word_cnt++;
    }
    if (isspace(c) && inword) {
      inword = false;
    }
  }
  printf(
      "\nword = %d, lowercare = %d, uppercase = %d, "
      "digits = %d, puntuation = %d\n",
      word_cnt, low_ct, up_ct, dig_ct, punct_cnt);
  return 0;
}
