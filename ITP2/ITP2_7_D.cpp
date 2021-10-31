// ITP2_7_D
#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int q;
  cin >> q;
  multiset<int> s;

 // multiset allows you to insert same value 
  for (int i = 0; i < q; i++) {
    int command, num;
    cin >> command;
    if (command == 0) {
      cin >> num;
      s.insert(num);
      cout << s.size() << endl;

    } else if (command == 1) {
      cin >> num;
      cout << s.count(num) << endl;
    } else if (command == 2) {
      cin >> num;
      s.erase(num);
    } else if (command == 3) {
      int L,R;
      cin >> L >> R;
      auto end = s.upper_bound(R);
      for (auto begin = s.lower_bound(L); begin != end; ++begin) {
        cout << *begin << endl;
      }
    }
  }

  return 0;
}
