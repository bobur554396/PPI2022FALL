#include <iostream>

using namespace std;

int main(){
    /*
    4
    3 4 6 5
    
    Output: 6
    */

    // read data from terminal
    int n;
    cin >> n; // 4
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // our logic: -3 -4 -6 -5
    int maxi = a[0]; // -3
    for(int i = 0; i < n; i++){
        if(a[i] > maxi){ // 5 > 6
            maxi = a[i]; // maxi = 6;
        }
    }

    cout << maxi << endl;



    return 0;
}