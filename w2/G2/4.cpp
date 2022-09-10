#include <iostream>

using namespace std;

int main(){
    /*
    Increment / Decrement
    pre / post
    ++ / --
    */
    int a = 2;
    int b = 3;

    int c = ++a - ++b; // (3 - 4)

    cout << c <<  endl;

    return 0;
}