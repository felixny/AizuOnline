#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b >> c;
    int count = 0;
    for (int i = 1; i < c; i++){
        if (c%i == 0 && a <= i && i <= b){
            count++;
        }
    }
    cout << count << endl;
}