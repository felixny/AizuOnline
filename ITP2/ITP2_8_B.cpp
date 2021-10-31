// ITP2_8_B
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
  int q;
  string key;
  int x;
  cin >> q;
  map<string, int> m;
  for (int i = 0; i < q; i++) {
    int command;
    cin >> command;
    if (command == 0) {
      cin >> key >> x;
      m[key] = x;
    } else if (command == 1) {
      cin >> key;
      cout << m[key] << endl;
    } else if (command == 2){
        cin >> key;
        m.erase(key);
    }
  }

  return 0;
}
