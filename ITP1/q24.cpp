#include <iostream>

using namespace std;

int main() {
  int n, m;
  int a[101][101];
  int b[101];
  int number;

  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 1; i <= m; i++) {
    cin >> b[i];
  }

  for (int i = 1; i <= n; i++) {
      number = 0;
    for (int j = 1; j <= m; j++) {
      number += a[i][j] * b[j];
    }
    cout << number << endl;
  }

  return 0;
}