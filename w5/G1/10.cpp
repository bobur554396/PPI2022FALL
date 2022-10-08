#include <iostream>

using namespace std;

int main(){

    // - [ ] eye (1, 0)
    
    /*
    Input:
    3

    Output:
    1 0 0 
    0 1 0
    0 0 1

    
    */

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
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