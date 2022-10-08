#include <iostream>

using namespace std;

int main(){
    /*
    3
    3 6 5
    6 9 7
    5 7 4

    yes
    */

    freopen("input.txt", "r", stdin); // r - read
    freopen("output.txt", "w", stdout); // w - write

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;


    return 0;
}