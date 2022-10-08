#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){ // rows
        for(int j = 0; j < n; j++){ // columns
            cout << i << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}