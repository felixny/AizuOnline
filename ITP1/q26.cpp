#include <iostream>
using namespace std;

int main() {
  int n;
  int sum;

  while (1) {
    cin >> n >> sum;
    if (n == 0 && sum == 0) {
      break;
    }
    int count = 0;
    for (int i = 1; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k <= n; k++) {
          if (i + j + k == sum) count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}