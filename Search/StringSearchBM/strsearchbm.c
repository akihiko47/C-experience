#include <stdlib.h>

int strsearchbm(char p[], char s[]) {
  int n, m, i, j;
  int d[256];

  // get length of string and substring
  for (n = 0; s[n] != '\0'; n++){}; // get len of main string
  for (m = 0; p[m] != '\0'; m++){}; // get len of part string

  if (n <= 0 || m <= 0) {
    return -1;
  }

  // PART 1
  // generating array d
  // difficulty O(m)
  
  
  

  // PART 2
  // searching substring p in string s
  // difficulty O(n)
  i = 0;
  j = 0;
  while (i < n) {  // while string s not ended
    if (s[i] == p[j]) {
      i++;
      j++;
      if (j == m) {
	return i-j;  // p in s
      }
    } else if (j == 0) {
      i++;
      if (i == n) {
	return -1;  // p not in s
      }
    } else {
      j = d[j-1];
    }
  }
  
  return -1;
};
