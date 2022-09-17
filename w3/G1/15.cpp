#include <iostream>

using namespace std;

int main(){
    /*
    Array - list of same data type values.

    data_type arr_name[size];

    address:  0x.   0x.    0x.    0x.
    arr:      [2]   [6]   [12]   [-10 ]
    index:     0     1     2       3 
    */
    int arr[4];

    arr[0] = 2;
    arr[1] = arr[0] + 4; // 6
    arr[2] = arr[1] * 2; // 12
    arr[3] = -10;

    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }

    // cout << arr[0] << " " << arr[1] << endl;

    return 0;
}