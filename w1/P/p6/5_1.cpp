#include <iostream>

using namespace std;

int main(){

    /*
    Your are given one lowercase latter.
    Task: convert letter to uppercase.

    input: a
    output: A

    input: t
    output: T

    Solution:
    a - 97
    A - 65

    a(97) - 32 = A(65)
    */
    
    char c;
    cin >> c; // read data from console

    // cout << (char) ((int) c - 32) << endl;
    cout << (char) (c - 32) << endl;


    return 0;
}