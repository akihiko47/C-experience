#include <stdio.h>
#include "binsearch.h"

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
  int huge[32768];
  int needed;
  int result;
  int i;

  for (i = 0; i < 32; i++) {
    initial[i] = i * 2;
  }

  // !!! ARRAY MUST BE SORTED !!!
  
  needed = 3;
  result = binsearch(initial, 32, 6);
  runtest(result, needed);

  needed = 16;
  result = binsearch(initial, 32, 32);
  runtest(result, needed);

  needed = 0;
  result = binsearch(initial, 32, 0);
  runtest(result, needed);

  needed = -1;
  result = binsearch(initial, 32, 66);
  runtest(result, needed);

  needed = -1;
  result = binsearch(initial, 32, 666);
  runtest(result, needed);

  for (i = 0; i < 32768; i++) {
    huge[i] = i;
  }

  needed = 1024;
  result = binsearch(huge, 32768, 1024);
  runtest(result, needed);

};
