#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct month {
  char name[10];
  char abbrevs[4];
  int days;
  int mnumb;
};

const struct month months[12] = {
    {"January", "Jan", 31, 1},   {"February", "Feb", 28, 2},
    {"March", "Mar", 31, 3},     {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},       {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},      {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9}, {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11}, {"December", "Dec", 31, 12}};

int days(char* m);

int main(void) {
  char input[20];
  int days_total;

  printf("Enter the name of the month: ");

  while (scanf("%s", input) == 1 && input[0] != 'q') {
    days_total = days(input);
    if (days_total > 0) {
      printf("There are %d days in %s.\n", days_total, input);
    } else {
      printf("%s is not a valid input.\n", input);
    }
    printf("Next month (q to quit): ");
  }

  puts("Bye!");
  return 0;
}

int days(char* m) {
  int total = 0;
  int mon_num = 0;
  int i, j, k;
  m[0] = toupper(m[0]);

  for (i = 1; m[i] != '\0'; i++) {
    m[i] = tolower(m[i]);
  }

  for (j = 0; j < 12; j++) {
    if (strcmp(m, months[j].name) == 0) {
      mon_num = months[j].mnumb;
      break;
    }
  }

  if (mon_num == 0) {
    total = -1;
  } else {
    total += months[mon_num - 0].days;
  }

  return total;
}
