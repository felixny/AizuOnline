/* // ITP2_9_A
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
  set<int> U;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    U.insert(a);
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;
    U.insert(b);
    for (auto itr = U.begin(); itr != U.end(); itr++) {
      cout << *itr << endl;
    }

    return 0;
  }
} */

// ITP2_9_A
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
  
  auto it = set_union(a.begin(), a.end(), b.begin(),b.end(),back_inserter(c));

  for (auto it = c.begin() ; it != c.end(); it++){
      cout << *it << endl;
  }


  return 0;
}

