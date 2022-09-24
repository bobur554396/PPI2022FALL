#include <iostream>

using namespace std;

int main(){
    /*
    Input:
    4
    10 7 5 8

    Output:
    7 + 5 = 35
    */

    // read data from terminal
    int n;
    cin >> n; // 4
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; // i = index
    }


    // our logic
    int sum = 0;
    // sum = 7
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1){
            sum += a[i]; // 12
        }
    }

    cout << sum << endl;

    cout << endl;
    


    return 0;
}