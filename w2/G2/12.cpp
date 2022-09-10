#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    /*
    Your are given one number I - index of the bit.
    You have to set value "1" to the I-th bit of 5.
    
    - [ ] set 1 for i-th bit of number.

    input:
    0
    Output:
    5

    input:
    1
    Output:
    7

    5 - 0000 0101
    */
    int a = 5;
    int i;
    cin >> i;

    bitset<4> b1 = a;
    
    int b = (1 << i);
    bitset<4> b2 = b;

    int c = a | b;
    bitset<4> b3 = c;

 
    cout << b1 << endl << b2 << endl;

    cout << endl << b3 << endl << c << endl;

    
    

    return 0;
}