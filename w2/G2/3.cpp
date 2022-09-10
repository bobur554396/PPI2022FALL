#include <iostream>

using namespace std;

int main(){
    /*
    Increment / Decrement
    pre / post
    ++ / --
    */
    int a = 2;
    // a--; // <=> a = a + 1; - post increment
    // ++a; // <=> a = a + 1; - pre increment
    // int b = a++; // post increment
    int b = ++a; // post increment

    cout << a << " " << b <<  endl;

    return 0;
}