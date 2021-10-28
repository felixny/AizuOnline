// ITP2_2_C
#include <deque>
#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <queue>


using namespace std;

int main() {
  int q;
  int command, num;
  int x;
  int n;
  priority_queue<int> v[2000];
  cin >> n >> q;

  for (int i = 0; i < q; i++) {
    cin >> command;
    if (command == 0) {
      cin >> num >> x;
      v[num].emplace(x);

    } else if (command == 1) {
      cin >> num;

      if (v[num].size() != 0) {
        cout << v[num].top() << endl;
      }

    } else {
      cin >> num;
      if (v[num].size() != 0) {
        v[num].pop();
      }
    }
  }

  return 0;
}