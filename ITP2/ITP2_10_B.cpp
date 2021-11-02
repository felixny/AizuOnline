// ITP2_10_B 
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
  unsigned int a, b;
  cin >> a >> b;
  bitset<32> y(a);
  bitset<32> x(b);
  cout << (y & x) << endl;
  cout << (y | x) << endl;
  cout << (y ^ x) << endl;




  return 0;
}
