// ITP1_10_C

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << fixed << setprecision(12);

  while (1) {
    int n;
    double s[1000];
    double sum = 0;
    cin >> n;
    if (n == 0) {
      break;
    }
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }

    for (int i = 0; i < n; i++) {
      sum += s[i];
    }

    double average = sum / n;

    double answer = 0;

    for (int i = 0; i < n; i++) {
      answer += pow(s[i] - average, 2);
    }

    answer = sqrt(answer / n);

    cout << answer << endl;
  }

  return 0;
}