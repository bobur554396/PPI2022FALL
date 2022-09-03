#include <iostream>

using namespace std;

int main(){
    
    // 0001 = 1*2^0 + 0*2^1 + 0*2^2 + 0*2^3 = 1
    // 0010 = 0*2^0 + 1*2^1 + 0*2^2 + 0*2^3 = 2
    // 0011 = 1*2^0 + 1*2^1 + 0*2^2 + 0*2^3 = 3
    int a = 3;
    // cout << a << endl;

    char c = 'a'; // 97 -> binary
    cout << (int)c << endl; // type casting

    int d = 97;
    cout << (char)d << endl;

    return 0;
}