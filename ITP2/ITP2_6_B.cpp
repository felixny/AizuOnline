// ITP2_6_B
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

  int m;
  cin >> m;
  vector<int> b(m);

  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  /*  int f = 0;
   for (int i = 0; i < m; i++) {
     while (f < a.size() && a[f] != b[i]) f++;
     if (f == a.size()) {
       cout << 0 << endl;
       return 0;
     }
   }
   cout << 1 << endl; */

  cout << includes(a.begin(), a.end(), b.begin(), b.end()) << endl;

  return 0;
}
