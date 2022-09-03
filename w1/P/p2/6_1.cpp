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
    
    cout << (char)((int)c + 32) << endl;


    return 0;
}