// ITP2_10_D
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
  int n;
  cin >> n;
  bitset<64> mask[n];
  for (int i = 0; i < n; i++) {
    int k, b;
    cin >> k;
    while (k-- > 0) {
      cin >> b;
      mask[i].set(b);
    }
  }

  bitset<64> b;
  int q;

  cin >> q;
  for (int i = 0; i < q; i++) {
    int command, m;
    cin >> command >> m;
    if (command == 0) {
    
      cout << b[m] << endl;
    } else if (command == 1) {
     
      b |= mask[m]; // or  いずれかのビットが 1 なら結果が 1 になるビット演算です。 ON
      // b = b | mask[m]
    } else if (command == 2) {
      
      b &= ~mask[m]; // 両方のビットが 1 のときのみ結果が 1 になるビット演算です。OFF
      // ~
    } else if (command == 3) {
    
      b ^= mask[m]; // inversion

    } else if (command == 4) { // print all
      cout << ((b&mask[m]) == mask[m]) << endl;

    } else if (command == 5) {
      cout << (b&mask[m]).any() << endl;

    } else if (command == 6) {
      cout << (b&mask[m]).none() << endl;

    } else if (command == 7) {
      cout << (b&mask[m]).count() << endl;

    } else if (command == 8) {
      cout << (b&mask[m]).to_ullong() << endl;
    }
  }

  return 0;
}
