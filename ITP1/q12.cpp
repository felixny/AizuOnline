#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main(){

    double r;
    cin >> r;


    std::cout << std::fixed << std::setprecision(6) << M_PI*r*r << " " << 2*M_PI*r << std::endl;

}