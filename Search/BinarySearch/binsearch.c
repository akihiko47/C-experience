int binsearch(int array[], int n, int x) {
  int l = 0;
  int r = n;
  int m = 0;
  int found = -1;
  while (l <= r) {
    m = (l + r) / 2;

    if (array[m] == x) {
      found = m;
      break;
    }
    
    if (array[m] < x) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }

  return found;
}
