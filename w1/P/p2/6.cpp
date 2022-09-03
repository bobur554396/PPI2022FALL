#include <iostream>

using namespace std;

int main(){
    /*
    Your are given one uppercase letter.
    Your program have to convert current letter to lower.
    
    Input: B
    Output: b
    */

    /*
    Solution:
    B = 66
    b = 98
    */
    char c;
    cin >> c;

    int a = (int) c; // 66
    int b = a + 32; // 98

    cout << (char) b << endl;


    return 0;
}