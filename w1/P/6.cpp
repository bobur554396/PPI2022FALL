#include <iostream>

using namespace std;

int main(){
    
    // 0000 - 0
    // 0001 - 1 = 0 * 2^3 + 0 * 2^2 + 0 * 2^1 + 1 * 2^0
    // 0010 - 2 = 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0
    // 0011 - 3 = 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 1 * 2^0
    int a = 3;


    cout << a << endl;

    return 0;
}