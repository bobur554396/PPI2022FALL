#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    /*
    and: &, or: |, xor: ^, not: ~
    */

    int a = 3;
    int b = 1;

    bitset<4> b1 = a;
    bitset<4> b2 = b;

    cout << b1 << endl << b2 << endl;

    // int c = a & b;
    // int c = a | b;
    int c = a ^ b;
    bitset<4> b3 = c;

    cout << endl << b3 << endl << c << endl;
    

    return 0;
}