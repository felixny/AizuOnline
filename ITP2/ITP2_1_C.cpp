// ITP2_1_C
#include <deque>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  int q;
  int command, num;
  int x;
  list<int> list;
  cin >> q;

  /* insert(x): Insert x
   before the element indicated by the cursor. After this operation, the cursor
   points the inserted element. */
  auto it = list.end();
  for (int i = 0; i < q; i++) {
    cin >> command;
    if (command == 0) {
      cin >> num;

      it = list.insert(it, num);

    } else if (command == 1) {
      cin >> num;
      advance(it,num);

    } else {
      it = list.erase(it);
    }
  }
  // for(int i : list)cout<<i<<endl;
  for (auto it = begin(list); it != end(list); it++){
      cout <<  (*it) << endl;
  }
  return 0;
}