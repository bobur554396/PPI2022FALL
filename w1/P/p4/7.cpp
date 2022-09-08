#include <iostream>

using namespace std;

int main(){

    /*
    Your are given one uppercase letter.
    Task: convert uppercase letter to lowercase.

    input: A
    output: a

    input: R
    output: r

    Solution:
    A - 65
    a - 97
    result = 65 + 32 = 97 'a'
    */
    char c;
    cin >> c;

    int a = (int) c;
    int b = a + 32;

    cout << (char) b << endl; // type casting 


    return 0;
}