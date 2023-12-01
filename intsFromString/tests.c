#include <stdio.h>
#include <string.h>
#include "intfromstr.h"

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
  char initial[32];
  int needed;
  int result;

  strcpy(initial, "a1a");
  needed = 1;
  result = intfromstr(initial);
  runtest(result, needed);

  strcpy(initial, "0");
  needed = 0;
  result = intfromstr(initial);
  runtest(result, needed);

  strcpy(initial, "");
  needed = 0;
  result = intfromstr(initial);
  runtest(result, needed);

  strcpy(initial, "111");
  needed = 111;
  result = intfromstr(initial);
  runtest(result, needed);

  strcpy(initial, "0002");
  needed = 2;
  result = intfromstr(initial);
  runtest(result, needed);

  strcpy(initial, "aaa");
  needed = 0;
  result = intfromstr(initial);
  runtest(result, needed);

  strcpy(initial, "a0b1c2c3");
  needed = 123;
  result = intfromstr(initial);
  runtest(result, needed);

  strcpy(initial, "1aaa1");
  needed = 11;
  result = intfromstr(initial);
  runtest(result, needed);

  strcpy(initial, "0ab1cg0bv0cd2cfgg0bv3");
  needed = 100203;
  result = intfromstr(initial);
  runtest(result, needed);
};

