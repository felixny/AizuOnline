#include <iostream>
using namespace std;

int main() {
  int n, number;
  int card[4][13] = {};
  char symbol;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> symbol >> number;
    if (symbol == 'S') card[0][number - 1] = 1;
    if (symbol == 'H') card[1][number - 1] = 1;
    if (symbol == 'C') card[2][number - 1] = 1;
    if (symbol == 'D') card[3][number - 1] = 1;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      if (i == 0 && card[i][j] == 0)
        cout << "S " << j + 1 << endl;
      else if (i == 1 && card[i][j] == 0)
        cout << "H " << j + 1 << endl;
      else if (i == 2 && card[i][j] == 0)
        cout << "C " << j + 1 << endl;
      else if (i == 3 && card[i][j] == 0)
        cout << "D " << j + 1 << endl;
    }
  }
  return 0;
}