//  ITP1_7_D
#include <iostream>

using namespace std;


int main(){

    long long int a[100][100], b[100][100];

    int n, m,l;
    cin >> n >> m >> l;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < l; j++){
            cin >> b[i][j];
        }
    } 
    // array[row][col] col first in loop
    // rows right arrow cols down arrow
    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            long long int elem = 0;
            for (int k = 0; k < m; k++){
                elem += a[i][k]*b[k][j];
            }
            if (j ==0) cout << elem;
            else cout << " " << elem;
        }
        cout << endl;
    }
    return 0;

}