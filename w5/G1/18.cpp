#include <iostream>

using namespace std;

int main(){
    // Snake
    
    /*
    Input:
    4

    Output:
    1   2  3  4 ---- 0
    8   7  6  5 ---- 1
    9  10 11 12 ---- 2
    16 15 14 13 ---- 3    
    */

    int n;
    cin >> n;
    int a[n][n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){ // even index rows
            for(int j = 0; j < n; j++){ // from left to right
                a[i][j] = ++cnt;
            }
        } else { // odd index rows
            for(int j = n - 1; j >= 0; j--){ // from right to left
                a[i][j] = ++cnt;
            }
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