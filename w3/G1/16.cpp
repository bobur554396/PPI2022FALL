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
    // float arr[]; -- wrong creation of an array

    float arr[] = {2.5, 4.3, 5.7, 2.0};

    // float arr[3] = {2.5, 4.3, 5.7, 2.0}; - wrong
    bool b[3] = {true, false, true};
    char c[10] = {'h', 'e', 'l', 'l', 'o'};


    return 0;
}