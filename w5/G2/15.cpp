#include <iostream>

using namespace std;

int main(){
    /*
    Snake

    Input:
    4

    Output:
    1  2   3   4   ---- 0 row
    8  7   6   5   ---- 1 row
    9  10  11  12  ---- 2 row
    16 15  14  13  ---- 3 row
    */
    int n;
    cin >> n;
    int a[n][n];

    int cnt = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){ // even row
            for(int j = 0; j < n; j++) // move from left to right
                a[i][j] = cnt++;
        } else { // odd row
            for(int j = n - 1; j >= 0; j--) // move from right to left
                a[i][j] = cnt++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    


    return 0;
}