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
  for (i = 0; i < 256; i++) {
    d[i] = m;
  }
  for (i = 0; i < m; i++) {
    d[p[i]] = m - 1 - i;
  }

  // PART 2
  // searching substring p in string s
  i = m - 1;
  while (i < n) {
    j = m - 1;
    while (j >= 0 && s[i] == p[j]) {
      i--;
      j--;
    }

    if (j < 0) {
      return i + 1;
    }

    i += d[s[i]];
  }
  return -1;
};
