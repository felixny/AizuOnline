// ITP2_2_D
#include <deque>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main() {
  int q;
  int command;
  int x;
  int n;
  int t;
  int S; 
  cin >> n >> q;
  vector<list<int>> s(n);  // 2d array?


  for (int i = 0; i < q; i++) {
    cin >> command;
    if (command == 0) {
      cin >> t >> x;
      s[t].push_back(x);
      // s[t].insert(s[t].end(),x);

    } else if (command == 1) {
      cin >> t;
      if (!s[t].empty()) {
        auto itr = s[t].begin();
        cout << *itr;
        while (++itr != s[t].end()) cout << " " << *itr;
      }
      cout << endl;
    } else {
      cin >> S >> t;
      s[t].splice(s[t].end(), s[S]);
      s[S].clear();
    }
  }

  return 0;
}