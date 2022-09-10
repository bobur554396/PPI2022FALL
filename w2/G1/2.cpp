#include <iostream>

using namespace std;

int main(){

    /*
    increment/decrement value of variable
    pre/post
    ++/--

    */

    int a = 2;
    // a++; // post increment, <=> a = a + 1; 
    // ++a; // pre increment, <=> a = a + 1; 

    // int b = a++; // b = a; a = a + 1;
    int b = ++a; // a = a + 1; b = a;

    cout << a << " " << b << endl;
    
    return 0;
}