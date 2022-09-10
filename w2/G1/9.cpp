#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    // - [ ] and, or, xor

    int a = 2; // 4 bytes * 8 bits = 32 bit
    bitset<4> d1 = a;


    int b = ~a; // ~ <=> not 
    bitset<32> d2 = b;

    int c = ~b;
    bitset<32> d3 = c;

    cout << d3 << endl << c << endl;
    // cout << d1 << endl << d2 << endl << b << endl;

    return 0;
}