#include <iostream>

using namespace std;

int main(){
    /*
    Your are given one inetger number - N. N - studetn's point for PP1.
    Task: convert this points to the letter representation.

    Input: 97
    Output: A

    Input: 92
    Output: A-

    Input: 86
    Output: B+

    Solution:

    95 - 100 => A
    90 - 94 => A-
    85 - 89 => B+
    ... => D
    */
    float n;
    cin >> n; // 105
    
    // (1 && 1) => 1
    if(n >= 95 && n <= 100){
        cout << "A" << endl;
    } else if (n >= 90 && n < 95){
        cout << "A-" << endl;
    } else if (n >= 85 && n < 90){
        cout << "B+" << endl;
    } else if(n > 100){
        cout << "error" << endl;
    } else {
        cout << "D" << endl;
    }


    return 0;
}