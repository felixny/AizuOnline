// ITP2_8_D
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
  multimap<string, int> m;
  int q;
  string key;
  int x;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int command;
    cin >> command;
    if (command == 0) {
      cin >> key >> x;
      m.insert(pair<string, int>(key, x));
    } else if (command == 1) {
      cin >> key;
      for (auto itr = m.lower_bound(key); itr != m.upper_bound(key); itr++) {
        cout << itr->second << endl;
      }
    } else if (command == 2) {
      cin >> key;
      m.erase(key);
    } else if (command == 3) {
      string L, R;
      cin >> L >> R;
      auto itr = m.lower_bound(L);
      auto end = m.upper_bound(R);
      for (auto begin = itr; itr != end; itr++) {
        cout << itr->first << " " << itr->second << endl;
      }
    }
  }

  return 0;
}
