// ITP2_6_A
#include <algorithm>
#include <iostream>
#include <numeric>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int query;
  cin >> query;
  for (int i = 0; i < query; i++) {
    int num;
    cin >> num;
    /* if (find(v.begin(), v.end(), num) != v.end()){
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    } time limit 2s exceeded */
    int NUM = *lower_bound(v.begin(), v.end(), num);
    cout << (num == NUM) << endl;
  }

  return 0;
}
