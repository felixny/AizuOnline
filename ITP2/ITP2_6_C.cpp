// ITP2_6_C
#include <algorithm>
#include <iostream>
#include <numeric>
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

  int query;
  cin >> query;
  for (int i = 0; i < query; i++) {
    int k;
    cin >> k;

    cout << lower_bound(a.begin(), a.end(), k) - a.begin() << endl;
  }

  return 0;
}
