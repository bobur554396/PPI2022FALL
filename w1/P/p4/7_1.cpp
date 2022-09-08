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

    cout << (char) ((int) c + 32) << endl;

    return 0;
}