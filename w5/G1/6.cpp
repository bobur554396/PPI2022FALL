#include <iostream>

using namespace std;

int main(){
    // 2D arrays

    /*
    4
    3 10 5 1

    3 3
    3 10 5
    6 9 7
    4 0 6
    */
    int a[3][3];
    a[0][0] = 3;
    a[0][1] = 10;
    a[0][2] = 5;

    a[1][0] = 6;
    a[1][1] = 9;
    a[1][2] = 7;

    a[2][0] = 4;
    a[2][1] = 0;
    a[2][2] = 6;

    for(int i = 0; i < 3; i++){ // rows
        for(int j = 0; j < 3; j++){ // column
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}