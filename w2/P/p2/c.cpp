/*
N

a = 0
b = 0
c = 1
d = 1
1100 = a*8 + b*4 + c*2 + d*1 = 12
0011 = d*8 + c*4 + b*2 + a*1 = 3

reverse
~(a) - invert
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
    n /= 2;

    // dcba / 1100
    // abcd / 0011

    cout << (a*8 + b*4 + c*2 + d*1) << endl;

    return 0;
}