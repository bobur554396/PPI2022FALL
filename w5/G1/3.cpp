#include <iostream>

using namespace std;

int main(){

    freopen("input.txt", "r", stdin); // r - read
    freopen("output.txt", "w", stdout); // w - write

    int n, k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;

    bool found = false;
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            found = true;
            break;
        }
    }

    if(found == true)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}