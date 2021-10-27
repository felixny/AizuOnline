// ITP1_9_D
#include <iostream>
#include <string>

using namespace std;

int main() {
  string text;
  cin >> text;
  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    string op, p = "";
    int a, b;
    cin >> op;
    if (op == "print") {
      cin >> a >> b;
      cout << text.substr(a, b - a + 1) << endl;
    } else if (op == "reverse") {
      cin >> a >> b;
      for (int i = b; i >= a; i--) p += text[i];
      text.replace(a, b - a + 1, p);
    } else {
      cin >> a >> b >> p; // a = 1 b = 3
      text.replace(a, b - a + 1, p); // a = 1 b = 3-1+1 = 3
    }
  }
  return 0;
}
/* abcde
3
replace 1 3 xyz
reverse 0 2
print 1 4 */