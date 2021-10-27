//  ITP1_7_C

#include <iostream>
using namespace std;

int main() {
  int r, c;
  int a[101][101];

  cin >> r >> c;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }

  // initialize r + 1 c +1 to zero
  for (int i = 0; i <= r; i++) {
    a[i][c] = 0;  // column right side
  }
  for (int j = 0; j <= c; j++) {
    a[r][j] = 0;  // row bottom
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      a[i][c] += a[i][j];  // col
      a[r][j] += a[i][j];  // row
      a[r][c] += a[i][j];  // corner
    }
  }

  for (int i = 0; i <= r; i++) {
    for (int j = 0; j <= c; j++) {
      if (j) cout << ' ';
      cout << a[i][j];
    }
    cout << endl;
  }

  return 0;
}