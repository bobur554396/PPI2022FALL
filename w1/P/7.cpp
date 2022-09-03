#include <iostream>

using namespace std;

int main(){
    
    // 0000 - 0
    // 0001 - 1 = 0 * 2^3 + 0 * 2^2 + 0 * 2^1 + 1 * 2^0
    // 0010 - 2 = 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0
    // 0011 - 3 = 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 1 * 2^0
    // int a = 3;

    char c = 'A'; // 65
    cout << (int) c << endl;
    
    int a = 65;
    cout << (char) a << endl;


    
    // float a = 2.4;
    // int b = a; // hidden type casting 
    // cout << b << endl;


    // float a = 2.4;
    // cout << (int) a << endl;

    // int a = 2;
    // cout << (float) a << endl;

    
    return 0;
}