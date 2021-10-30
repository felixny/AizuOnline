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
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int query;
  cin >> query;
  for (int i = 0; i < query; i++) {
    int b, e,t;
    cin >> b >> e >> t;
    swap_ranges(v.begin()+b, v.begin()+e,v.begin()+t);
  }

  /* for(int i = 0; i < n; ++i) {
      cout << v[i] << " \n"[i==n-1];
      // if true return '\0' 
      // if false return ' \n' 
  } */

  for(int i=0; i<n; ++i){
        if(i) cout << " ";
        cout << v[i];
    }
    cout << endl;
  return 0;
}
