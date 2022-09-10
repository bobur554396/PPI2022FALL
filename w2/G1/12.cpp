#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    // - [ ] set 1 for i-th bit of number: 

    int i;
    cin >> i; 

    bitset<8> d = 5;
    bitset<8> d2 = 1 << i;

    int res = 5 | (1 << i);
    bitset<8> d3 = res;

    cout << d << endl;
    cout << d2 << endl;
    cout << d3 << endl;
    cout << res << endl;

    return 0;
}