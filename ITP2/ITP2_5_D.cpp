// ITP2_5_D
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
  vector<int> v(n);
  iota(v.begin(), v.end(), 1);

  do {
    for (int i = 0; i < n; i++) {  // cout<<(i?" ":"")<<v[i];
      if (i) {  // zero is used to represent false so the first value i = 0 is
                // always false which prints no empty string. ""
        cout << " [value i: ]" << i;
        cout << " " << v[i];
      } else {
        cout << "" << v[i];
        cout << " [value i: ]" << i;
      }
    }
    cout << endl;
  } while (next_permutation(v.begin(), v.end()));
  return 0;
}
