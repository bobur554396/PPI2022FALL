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
    bool found = false;
    for(int i = 0; i < n; i++){
        if(a[i] == k)
            found = true;
    }

    if(found) // found == true
        cout << "yes" << endl;
    else
        cout << "no" << endl;



    return 0;
}