// ITP1_9_B
#include <iostream>
#include <string>

using namespace std;

int main() {
  string text;

  int n;
  int h;

  while (1) {
    cin >> text;
    if (text == "-") {
      break;
    }

    cin >> n;
    
    for (int i = 0; i < n; i++) {
      cin >> h; //4
      string add = text.substr(0,h); //abcd
        text = text + add; // abcdeefab + abcd = abcdeefababcd
        text = text.substr(h,text.size());// 4,9 eefababcd
    }
    cout << text << endl;
  }

  return 0;
}