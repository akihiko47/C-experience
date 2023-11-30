#include <stdio.h>
#include "intfromstr.h"

int main() {
  char str[128];
  int num = 0;

  printf("This program will get number from your string and convert it to int\n");
  printf("Enter line with numbers and letters in it: ");

  gets(str);

  num = intfromstr(str);

  printf("number from string as integer = %d\n", num);
}
