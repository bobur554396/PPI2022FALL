#include <iostream>

using namespace std;

int main(){
    /*
    Array - list of same data type values;

    data_type var_name[size];

    addresses:      0x.  0x.  0x.  0x.
    int arr[4]:     [2]  [6]  [4]  [-1]
    index:           0    1    2    3
    */
    int n = 4;
    int arr[n];
    arr[0] = 2;
    arr[1] = arr[0] + 4; // 6
    arr[2] = arr[0] * 2; // 4
    arr[3] = -1;

    // cout << arr[0] << endl; // cout << *(arr + 0) << endl;
    // cout << arr[1] << endl; // cout << *(arr + 1) << endl;
    // cout << arr[2] << endl; // cout << *(arr + 2) << endl;
    // cout << arr[3] << endl; // cout << *(arr + 3) << endl;
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}