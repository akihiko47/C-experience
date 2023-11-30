int mypow(int x, int n) {
  int res = 1;
  while (n > 0) {
    res = res * x;
    n--;
  }
  return res;
};

int intfromstr(char * str) {
  char numstr[128];
  int i = 0;
  int numcnt = 0;
  int num = 0;

  for (i = 0; str[i] != '\0'; i++) {
    if ((str[i] - 48 <= 9) && (str[i] - 48 >= 0)) {
      numstr[numcnt] = str[i];
      num = num * 10;
      numcnt++;
    }
  }
  numstr[numcnt] = '\0';

  for (i = numcnt-1; i >= 0; i--) {
    num = num + ((((int)numstr[i])-48) * mypow(10, numcnt-1-i));
  }

  return num;
}
