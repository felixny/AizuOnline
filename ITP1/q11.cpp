#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int a;
    double b;
    int d, r;
    double f;

    cin >> a >> b;

    d = a/b;
    r = a%int(b);
    f = a/b;
    
    std::cout << std::fixed;
    std::cout << d << " " << r << " " << std::setprecision(5) << f << std::endl;

}