#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    /*
    and: &, or: |, xor: ^, not: ~
    */

    int a = 3;
    bitset<4> b1 = a;

    cout << b1 << endl;

    int c = ~a;
    bitset<32> b3 = c;

    cout << endl << b3 << endl << c << endl;
    

    return 0;
}