#include <stdio.h>
#include "linearsearch.h"

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
  int initial[32];
  int needed;
  int result;
  int i;

  for (i = 0; i < 32; i++) {
    initial[i] = i;
  }
  
  needed = 6;
  result = linearsearch(initial, 32, 6);
  runtest(result, needed);

  initial[12] = 111;
  needed = 12;
  result = linearsearch(initial, 32, 111);
  runtest(result, needed);

  initial[0] = 2222;
  needed = 0;
  result = linearsearch(initial, 32, 2222);
  runtest(result, needed);

  initial[31] = 404;
  needed = 31;
  result = linearsearch(initial, 32, 404);
  runtest(result, needed);

  needed = -1;
  result = linearsearch(initial, 32, 666);
  runtest(result, needed);

  initial[5] = 47;
  initial[25] = 47;
  needed = 5;
  result = linearsearch(initial, 32, 47);
  runtest(result, needed);

};
