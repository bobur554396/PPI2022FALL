#include <iostream>

using namespace std;

int main(){
    /*
    4
    7 -4 -2 10

    2
    */

    freopen("input.txt", "r", stdin); // r - read
    freopen("output.txt", "w", stdout); // w - write

    // read data from terminal
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0)
            cnt++;
    }

    cout << cnt << endl;
        

    

    return 0;
}