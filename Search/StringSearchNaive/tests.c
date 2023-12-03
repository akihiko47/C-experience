#include <stdio.h>
#include <string.h>
#include "strsearchnaive.h"

int itest = 1;

void runtest(int result, int needed) {
  if (result == needed) {
    printf("test_%d - OK\n", itest);
  } else {
    printf("test_%d - ERROR\nexpected %d got %d\n", itest, needed, result);
  }
  itest++;
};

int main() {
  char initial[128] = {'T', 'h', 'e', ' ', 'D', 'a', 'r', 'k', ' ', 'S', 'i', 'd', 'e', ' ', 'O', 'f', ' ', 'T', 'h', 'e', ' ', 'M', 'o', 'o', 'n', '\0'};
  char part[128];
  int needed;
  int result;

  strcpy(part, "Dark");
  needed = 4;
  result = strsearchnaive(part, initial);
  runtest(result, needed);

  strcpy(part, "The");
  needed = 0;
  result = strsearchnaive(part, initial);
  runtest(result, needed);

  strcpy(part, "Moon");
  needed = 21;
  result = strsearchnaive(part, initial);
  runtest(result, needed);

  strcpy(part, "moon");
  needed = -1;
  result = strsearchnaive(part, initial);
  runtest(result, needed);

  strcpy(part, "hotel");
  needed = -1;
  result = strsearchnaive(part, initial);
  runtest(result, needed);

  strcpy(part, "The Dark Side Of The Moon");
  needed = 0;
  result = strsearchnaive(part, initial);
  runtest(result, needed);

  strcpy(part, "");
  needed = -1;
  result = strsearchnaive(part, initial);
  runtest(result, needed);

  strcpy(part, " ");
  needed = 3;
  result = strsearchnaive(part, initial);
  runtest(result, needed);

};
