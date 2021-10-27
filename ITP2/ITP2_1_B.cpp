// ITP2_1_B
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int q;
  int command, num;
  int x;
  deque<int> A;
  cin >> q;

  for (int i = 0; i < q; i++) {
    cin >> command;
    if (command == 0) {
      cin >> num >> x;
      if (num == 0) A.push_front(x);
      if (num == 1) A.push_back(x);
      
    } else if (command == 1) {
      cin >> num;
      cout << A[num] << endl;
    } else if (command == 2) {
      cin >> num;
      if (num == 0) A.pop_front();
      if (num == 1) A.pop_back();
    }
  }
  return 0;
}