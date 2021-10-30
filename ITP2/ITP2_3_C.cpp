// ITP2_3_C
#include <math.h>

#include <iostream>
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
    int begin, end, k;
    cin >> begin >> end >> k;
    int count = 0;
    for (int j = begin; j < end; j++) {
      if (v[j] == k) count++;
    }
    cout << count << endl;
  }

  return 0;
}
