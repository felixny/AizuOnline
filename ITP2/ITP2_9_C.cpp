// ITP2_9_C
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
      cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for(int i = 0; i < m; i++){
      cin >> b[i];
  }

  vector<int> c;
  
  auto it = set_difference(a.begin(), a.end(), b.begin(),b.end(),back_inserter(c));

  for (auto it = c.begin() ; it != c.end(); it++){
      cout << *it << endl;
  }


  return 0;
}

