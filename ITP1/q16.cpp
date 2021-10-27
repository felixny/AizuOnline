#include <iostream>

using namespace std;

int main(){

    int n;
    int ai;
    long long sum = 0;
    int max = -10000000;
    int min = 10000000;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ai;
        sum = ai + sum;
        if (ai > max){
            max = ai;
        } 
        if (ai < min){
            min = ai;
        }

    }
    cout << min << " " << max << " " << sum << endl;


    return 0;
}