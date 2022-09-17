#include <iostream>

using namespace std;

int main(){
    /*
    5
    3 4 6 5 10
    4

    Output: yes
    */

    // read data from terminal
    int n, k;
    cin >> n; // 4
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;

    // our logic
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            cout << "yes" << endl;
            break;
        }

        if(i == n - 1)
            cout << "no" << endl;
    }




    return 0;
}