// ITP2_8_C
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
  map<string, int> m;
  int q;
  string key;
  int x;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int command;
    cin >> command;
    if (command == 0) {
      cin >> key >> x;
      m[key] = x;
    } else if (command == 1) {
      cin >> key;
      if (m.count(key))
        cout << m[key] << endl;
      else
        cout << 0 << endl;
    } else if (command == 2) {
      cin >> key;
      m.erase(key);
    } else if (command == 3) {
      string L, R;
      cin >> L >> R;
      auto end = m.upper_bound(R);
      for (auto begin = m.lower_bound(L); begin != end; begin++) {
        cout << (*begin).first << " " << (*begin).second << endl;
      }
    }
  }

  return 0;
}
