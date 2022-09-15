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
    /*
    Can we draw triangle, if we have three sides of it.
    a, b, c - sides of triangle.
    */

    int a, b, c;
    cin >> a >> b >> c;

    // (1 && 1 && 1) => 1
    if(a + b > c && a + c > b && b + c > a) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    



    return 0;
}