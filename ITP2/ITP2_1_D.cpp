// ITP2_1_D
#include <deque>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  int q;
  int command, num;
  int x;
  int n;
  vector<int> v[2000];
  cin >> n >> q;

 
  for (int i = 0; i < q; i++) {
    cin >> command;
    if (command == 0) {
      cin >> num >> x;
      v[num].push_back(x);
      
    } else if (command == 1) {
      cin >> num;
      for (int i = 0; i < v[num].size(); i++){
          if (i != 0) cout << " ";
          cout << v[num][i];
      }
      cout << endl;
     
    } else {
        cin >> num;
        v[num].clear();
     
    }
  }

  return 0;
}