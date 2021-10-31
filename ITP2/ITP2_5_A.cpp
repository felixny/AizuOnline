//ITP2_5_A
#include <algorithm>
#include <vector>
#include <utility>
#include <iostream>
using namespace std;

int main(){
    pair<int, int> pair[1<<17];
    int n;
    cin >> n;


    for (int i = 0; i < n; i++){
        cin >> pair[i].first >> pair[i].second;
    }
    sort(pair,pair+n);
    
    for (int i = 0; i < n; i++){
        cout << pair[i].first << " " << pair[i].second << endl;
    }

    return 0;
}