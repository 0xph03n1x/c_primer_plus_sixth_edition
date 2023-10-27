#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc < 2) {
    printf("Error: at least one command-line argumenti required.\n");
    return 1;
  } else {
    for (int i = argc - 1; i > 0; i--) {
      printf("%s ", argv[i]);
    }
  }
  puts("");
  return 0;
}
