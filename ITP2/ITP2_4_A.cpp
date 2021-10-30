// ITP2_4_A
#include <math.h>

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> v(n); //[0,0,0,0,0,0...n]
  for (int i = 0; i <n;i++){
      cin >> v[i];
  }

  int query;
  cin >> query;
  for (int i = 0; i < query; i++){
      int b, e;
      cin >> b >> e;
      reverse(v.begin() + b, v.begin()+e);
  }
  
  for (int i = 0; i < v.size(); i++){
      
      cout << v[i] << " \n"[i == v.size() - 1];
  }
 
  

  return 0;
}
