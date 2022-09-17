#include <iostream>

using namespace std;

int main(){
    /*
    4
    3 4 5 6

    4 6
    */

    // read data from terminal
    int n;
    cin >> n; // 4
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    // our logic
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }

    return 0;
}