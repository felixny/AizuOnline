// ITP2_4_C
#include <math.h>

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);  //[0,0,0,0,0,0...n]
  // vector<int>::iterator ip;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  v.erase(unique(v.begin(), v.end()), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " \n"[i == v.size() - 1];
  }

  return 0;
}
