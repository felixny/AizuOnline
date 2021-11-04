// ITP2_11_B
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
  int n,k,b;
  cin >> n >> k;
  vector<int> subset(k);
  for (int i = 0; i <k; i++){
      cin >> subset[i];
  }

  for (int i = 0; i < (1<<n); i++){
      bool includes = true;
      for (auto j : subset) if (~i & 1 <<j) includes = false;
      if(!includes) continue;

      vector<int> result;
      for (int j = 0; j <n; j++) if(i & 1 <<j) result.push_back(j);

      cout << i << ":";
      for (auto j : result) cout << " " << j;
      cout << endl;
  }

  return 0;
}