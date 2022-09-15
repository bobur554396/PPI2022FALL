/*

reverse: abcd -> dcba 
invert: ~(0010) -> 1101

N -> binary -> reverse -> decimal

1111

0 -> 0000 -> 0000 -> 0
2 -> 0010 -> 0100 -> 4
3 -> 0011 -> 1100 -> 12
12 -> 1100 -> 0011 -> 3
*/

#include <iostream>

using namespace std;

int main(){
    // Conditional statements

    /*  

        if(condition) {
            instructions/expressions of "if" block
        } else {
            instructions/expressions of "else" block
        }

    */
    int a, b;
    cin >> a >> b;

    if(a > b){ // 3 > 3
        cout << a << endl;
    } else if(b > a) {
        cout << b << endl;
    } else  {
        cout <<  "equal" << endl;
    }


    return 0;
}