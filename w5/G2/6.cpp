#include <iostream>

using namespace std;

int main(){
    /*
    2D array

    1D data
    4
    3 4 10 7

    2D data
    3 3
    2 7 5
    4 9 1
    8 3 4
    */
    int n, m; // n - rows, m - columns
    cin >> n >> m;
    int a[n][m]; // create 2D array
    a[0][0] = 2;
    a[0][1] = 7;
    a[0][2] = 5;

    a[1][0] = 4;
    a[1][1] = 9;
    a[1][2] = 1;

    a[2][0] = 8;
    a[2][1] = 3;
    a[2][2] = 4;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}