// ITP2_3_B
#include <math.h>

#include <iostream>
#include <vector>

using namespace std;
const int PINF = 2000000000;
const int NINF = -2000000000;

int main() {
  int n;
  int b;
  int e;
  int command;
  vector<int> v(n);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> v[i];

  }

  int query;
  cin >> query;
  for (int i = 0; i < query; i++) {
    cin >> command >> b >> e;
    if (command == 0) {
      int minNum = PINF;
      for (int j = b; j < e; j++) {
        minNum = min(minNum, v[j]);
      }
      cout << minNum << endl;
    } else if (command == 1) {
      int maxNum = NINF;
      for (int j = b; j < e; j++) {
        maxNum = max(maxNum, v[j]);
      }
      cout << maxNum << endl;
    }
  }

  return 0;
}
