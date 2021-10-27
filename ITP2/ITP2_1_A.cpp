// ITP2_1_A
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int q;
  int command, num;
  vector<int> A;
  cin >> q;

  for (int i = 0; i < q; i++) {
    cin >> command;
    if (command == 0) {
      cin >> num;
      A.push_back(num);
    } else if (command == 1) {
      cin >> num;
      cout << A[num] << endl;
    } else {
      A.pop_back();
    }
  }
  return 0;
}
