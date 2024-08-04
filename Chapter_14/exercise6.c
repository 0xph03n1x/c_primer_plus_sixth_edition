#include <stdio.h>
#include <stdlib.h>

struct player {
  int number;
  char first_name[20];
  char last_name[20];
  int at_bats;
  int hits;
  int walks;
  int RBIs;
  float batting_average;
};

int main(void) {
  FILE* fp;

  if ((fp = fopen("text.txt", "r")) == NULL) {
    fprintf(stderr, "Could not open data file.\n");
    exit(EXIT_FAILURE);
  }

  struct player team[20];
  for (int m = 0; m < 20; m++) {
    team[m].number = -1;
    team[m].at_bats = 0;
    team[m].hits = 0;
    team[m].walks = 0;
    team[m].RBIs = 0;
  }

  int j = 0;
  int number;
  int exist = 0;
  char first_name[20];
  char last_name[20];
  int at_bats;
  int hits;
  int walks;
  int RBIs;

  while (fscanf(fp, "%d %s %s %d %d %d %d", &number, first_name, last_name,
                &at_bats, &hits, &walks, &RBIs) == 7) {
    for (int i = 0; i < 20; i++) {
      if (team[i].number == number) {
        exist = 1;
        team[i].at_bats += at_bats;
        team[i].hits += hits;
        team[i].walks += walks;
        team[i].RBIs += RBIs;
      }
    }

    if (exist == 0) {
      team[j].number = number;
      for (int p = 0; p < 20; p++) team[j].first_name[p] = first_name[p];
      for (int q = 0; q < 20; q++) team[j].last_name[q] = last_name[q];
      team[j].at_bats += at_bats;
      team[j].hits += hits;
      team[j].walks += walks;
      team[j].RBIs += RBIs;
      j++;
    }
    exist = 0;
  }

  int total_at_bats = 0;
  int total_hits = 0;
  int total_walks = 0;
  int total_RBIs = 0;

  for (int k = 0; k < j; k++) {
    printf("%d %s %s %d %d %d %d %f\n", team[k].number, team[k].first_name,
           team[k].last_name, team[k].at_bats, team[k].hits, team[k].walks,
           team[k].RBIs, (float)team[k].hits / team[k].at_bats);
    total_at_bats += team[k].at_bats;
    total_hits += team[k].hits;
    total_walks += team[k].walks;
    total_RBIs += team[k].RBIs;
  }

  printf("%d %d %d %d %f\n", total_at_bats, total_hits, total_walks, total_RBIs,
         (float)total_hits / total_at_bats);

  return 0;
}
