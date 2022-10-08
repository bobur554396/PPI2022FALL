#include <iostream>

using namespace std;

int main(){
    /*
    4
    7 4 2 10
    0 1 2 3 -- indexes

    4 10
    */

    // read data from terminal
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++){
        if(i % 2 == 1)
            cout << a[i] << " ";
    }
        

    

    return 0;
}