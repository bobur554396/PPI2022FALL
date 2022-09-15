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

    int n;
    cin >> n; // 12

    int a = n % 2; // 0
    n /= 2; // 6

    int b = n % 2; // 0
    n /= 2; // 3

    int c = n % 2; // 1
    n /= 2; // 1

    int d = n % 2; // 1
    
    // n -> binary -> dcba -> reverse -> abcd
    // cout << d << c << b << a << endl;
    // cout << a << b << c << d << endl;

    // d * 2^0 + c * 2^1 + b * 2^2 + a * 2^3

    cout << (d*1 + c*2 + b*4 + a*8) << endl;
    // cout << (a*8 + b*4 + c*2 + d*1) << endl;



    return 0;
}