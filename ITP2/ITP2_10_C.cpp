// ITP2_10_C
#include <algorithm>
#include <bitset>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
  bitset<64> b;
  int q;

  cin >> q;
  for (int i = 0; i < q; i++) {
      int command;
      cin >> command;
    if (command == 0) {
      int x;
      cin >> x;
      cout << b[x] << endl;
    } else if (command == 1) {
      int x;
      cin >> x;
      b[x] = true;
    } else if (command == 2) {
      int x;
      cin >> x;
      b[x] = false;
    } else if (command == 3) {
        int x;
      cin >> x;
      b[x] = !b[x];

    } else if (command == 4) {
        cout << b.all() << endl;

    } else if (command == 5) {
        cout << b.any() << endl;

    } else if (command == 6) {
        cout << b.none() << endl;

    } else if (command == 7) {
        cout << b.count() << endl;

    } else if (command == 8) {
        cout << b.to_ullong() << endl;
    }
  }

  return 0;
}
