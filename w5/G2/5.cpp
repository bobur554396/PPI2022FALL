#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){ // row index
        for(int j = 0; j < m; j++){ // column index
            cout << i << j << " ";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}