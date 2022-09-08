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

    int a = (int) c; // a = 97
    int b = a - 32; // 65
    cout << (char) b << endl;


    return 0;
}