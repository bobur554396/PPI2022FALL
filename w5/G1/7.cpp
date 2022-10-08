#include <iostream>

using namespace std;

int main(){
    // 2D arrays
    // n m

    /*
    3 3
    3 10 5
    6 9 7
    4 0 6
    */

    freopen("input.txt", "r", stdin); // r - read
    freopen("output.txt", "w", stdout); // w - write


    // read data from terminal
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    

    // your logic


    // print updated matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }





    return 0;
}