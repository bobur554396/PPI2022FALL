#include <iostream>

using namespace std;

int main(){
    /*
    Your are given one lowercase letter.
    Task: convert it to uppercase.

    input: a
    output: A

    input: t
    output: T

    Solution:
    a - 97
    A - 65
    a -> A => 97 - 32 = 65
    */

    char c;
    cin >> c;

    int a = (int) c; // 97
    int b = a - 32; // 65

    cout << (char) b << endl;

    return 0;
}