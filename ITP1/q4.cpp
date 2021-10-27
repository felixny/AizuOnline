#include <iostream>
using namespace std;

int main(void){

    int x;
    int h, m,s;
    cin >> x;

    h = x/3600; // hours 
    m = (x%3600)/60; // mins
    s = (x%60);

    
    cout << h << ":" << m << ":" << s << endl;


}