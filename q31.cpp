// ITP1_9_C
#include <iostream>
#include <string>

using namespace std;

int main() {
  string taro;
  string hanako;

  int n;
  int pointH = 0;
  int pointT = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> taro >> hanako;
    if (taro > hanako) {
      pointT += 3;
    } else if (taro < hanako) {
      pointH += 3;
    } else if (taro == hanako) {
      pointT += 1;
      pointH += 1;
    }
  }

  cout << pointT << " " << pointH << endl;

  return 0;
}
/* 3
cat dog
fish fish
lion tiger */