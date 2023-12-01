int linearsearch(int array[], int n, int x) {
  int i = 0;
  for (i = 0; i < n; i++) {
    if (array[i] == x) {
      return i;
    }
  }

  return -1;
};
