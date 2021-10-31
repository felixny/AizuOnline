// ITP2_5_B
#include <algorithm>
#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
  tuple<int, int, char, long long, string> v[100001];
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b;
    char c;
    long long d;
    string e;
    cin >> a >> b >> c >> d >> e;
    v[i] = make_tuple(a, b, c, d, e);
  }
  sort(v, v + n);
  for (int i = 0; i < n; i++) {
    cout << get<0>(v[i]) << " " << get<1>(v[i]) << " " << get<2>(v[i]) << " "
         << get<3>(v[i]) << " " << get<4>(v[i]) << endl;
  }

  return 0;
}