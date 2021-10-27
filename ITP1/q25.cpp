#include <iostream>

using namespace std;

// m+f >= 80 -> A
// 65 <= m+f <= 80 -> B
// 50 <= m+f <= 65 -> C
// 30 <= m+f < 50 -> D
// if r >= 50 -> C
// m+f <= 30

int main(){

    int m,f,r;

    while(1){
        cin >> m >> f >>r;
        if (m == -1 && f == -1 && r == -1){
        break;
        }

        if (m == -1 || f == -1 ){
            cout << "F" << endl;
        } else if (m+f>=80){
            cout << "A" << endl;
        } else if (m+f>=65){
            cout << "B" << endl;
        } else if (m+f>=50){
            cout << "C" << endl;
        } else if (m+f>=30){
            if (r >= 50){
                cout << "C" << endl;
            } else{
                cout << "D" << endl;
            }
        } else {
            cout << "F" << endl;
        }
    }

    return 0;
}