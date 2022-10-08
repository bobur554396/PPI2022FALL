#include <iostream>

using namespace std;

int main(){

    freopen("input.txt", "r", stdin); // r - read
    freopen("output.txt", "w", stdout); // w - write

    // read data from terminal
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // our logic
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1){
            cout <<  i << " ";
        }
    }
    cout << endl;

    return 0;
}