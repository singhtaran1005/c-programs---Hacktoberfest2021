vector<int> sieve(int n) {
  int *arr = new int[n + 1]();
  vector<int> vect;
  for (int i = 2; i <= n; i++)
    if (arr[i] == 0) {
      vect.push_back(i);
      for (ll j = (ll(i) * ll(i)); j <= n; j += i)
        arr[j] = 1;
    }
  return vect;
}