// ITP1_10_B

#include <iostream>

#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,th;
    double PI=3.1415926535;

    cin >> a >> b >> th;
    th *= PI/180;
    cout << fixed << setprecision(10);
    cout << 0.5*a*b*sin(th) << endl;
    cout << a +b +sqrt(a*a +b*b -2*a*b*cos(th)) << endl;
    cout << b*sin(th) << endl;
    return 0;
}