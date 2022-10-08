#include <iostream>

using namespace std;

int main(){

    // - [ ] opposite eye (1, 2, 3)
    
    /*
    Input:
    3

    Output:
    2 2 1
    2 1 3
    1 3 4

    
    */

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1)
                a[i][j] = 1;
            else if(i + j < n - 1)
                a[i][j] = 2;
            else if(i + j > n - 1)
                a[i][j] = 3;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}