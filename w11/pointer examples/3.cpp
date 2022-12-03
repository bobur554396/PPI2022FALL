#include <iostream>

using namespace std;

int a[4];

int main(){
    int *p = a;
    *p = 2; // a[0] = 2;
    
    p++;
    *p = 3; // a[1] = 3;

    p++;
    *p = 5; // a[2] = 5;

    p++;
    *p = 7; // a[3] = 7;


    // cout << p << endl;


    for(int i = 0; i < 4; i++)
        cout << a[i] << " ";
    
    cout << endl;


    return 0;
}