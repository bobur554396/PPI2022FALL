#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    // - [ ] and, or, xor

    int a = 2;
    int b = 1;
    bitset<4> d1 = a;
    bitset<4> d2 = b;

    // int n1 = a & b; // & <=> and
    // int n1 = a | b; // | <=> or
    int n1 = a ^ b; // ^ <=> xor

    bitset<4> d3 = n1;

    cout << d1 << endl << d2 << endl << d3 << endl;
    cout << n1 << endl;

    return 0;
}