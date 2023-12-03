int strsearchnaive(char p[], char s[]) {
  int n, m, i, j;

  for (n = 0; s[n] != '\0'; n++){}; // get len of main string
  for (m = 0; p[m] != '\0'; m++){}; // get len of part string

  if (n <= 0 || m <= 0) {
    return -1;
  }

  i = 0;
  j = 0;
  while ((i <= n-m) && (j < m)) {

    if (s[i+j] == p[j]) {
      j++;
    } else {
      i++;
      j = 0;
    }
    
  }

  if (j == m) {
    return i;
  } else {
    return -1;
  }
}
