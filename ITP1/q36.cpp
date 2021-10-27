// ITP1_10_D

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << fixed << setprecision(12);

  int n;
  double x[1000];
  double y[1000];
  cin >> n;

  for (int i = 0; i < n; i++){
      cin >> x[i];
  }

  for (int i = 0; i < n; i++){
      cin >> y[i];
  }

  double d1 = 0, d2 = 0, d3 = 0, d4 = 0;

  for (int i = 0; i < n; i++){
      d1 += abs(x[i] - y[i]);
      d2 += (x[i]-y[i])*(x[i]-y[i]);
      d3 += abs(((x[i]-y[i])*(x[i]-y[i])*(x[i]-y[i])));
      d4 = max(d4, abs(x[i] - y[i]));
  }

  d2 = sqrt(d2);
  d3 = cbrt(d3);

  cout << d1 << endl;
  cout << d2 << endl;
  cout << d3 << endl;
  cout << d4 << endl;
  return 0;
}