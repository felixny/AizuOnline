// ITP2_5_C
#include <algorithm>
#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (prev_permutation(a.begin(), a.begin() + n)) {
    for (int i = 0; i < n; i++) {
      cout << a[i] << " \n"[i == n - 1];
    }
  }
  next_permutation(a.begin(), a.begin() + n);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " \n"[i == n - 1];
  }

  if (next_permutation(a.begin(), a.begin() + n)) {
    for (int i = 0; i < n; i++) {
      cout << a[i] << " \n"[i == n - 1];
    }
  }

  return 0;
}