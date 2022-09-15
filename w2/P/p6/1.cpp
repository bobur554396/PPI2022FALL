/*

0 - 0000
15 - 1111 -> 1*1 + 1*2 + 1*4 + 1*8 = 15

reverse: abcd -> dcba
invert: ~(1000) -> 0111



N -> binary -> reverse -> decimal

0 - 0000 -> 0000 -> 0
1 - 0001 -> 1000 -> 8
2 - 0010 -> 0100 -> 4
3 - 0011 -> 1100 -> 12
12 - 1100 -> 0011 -> 3

abcd -> dcba

a = 1
b = 1
c = 0
d = 0
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

    // 12 -> 1100 -> dcba
    // cout << d << c << b << a << endl;
    // cout << a << b << c << d << endl;
    // d*2^0 + c*2^1 + b*2^2 + a*2^3 => d*1 + c*2 + b*4 + a*8

    cout << (d*1 + c*2 + b*4 + a*8) << endl;



    return 0;
}