// ITP2_10_A
#include <algorithm>
#include <bitset>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
  unsigned int x;
  cin >> x;
  bitset<32> b(x);

  cout << b << endl;

  auto c = b;
  c.flip();
  cout << c << endl;

  c = b;
  c <<= 1;
  cout << c << endl;  // left shift

  c = b;
  c >>= 1;
  cout << c << endl;  // right shift

  return 0;
}
