#include <iostream>

using namespace std;

int main(){
    /*
    4
    7 -4 -2 10
    -2

    yes
    */
    freopen("input.txt", "r", stdin);

    // read data from terminal
    int n, k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;

    for(int i = 0; i < n; i++){
        if(a[i] == k){
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;

    return 0;
}