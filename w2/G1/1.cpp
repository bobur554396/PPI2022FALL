#include <iostream>

using namespace std;

int main(){

    /*
    1 byte = 8 bit
    [0][0][0][0][0][0][1][1]

    int - 4 bytes = 4 * 8 = 32 bits == cells
    float - 4 byte = 32 bits
    double - 8 bytes = 64 bits
    char - 1 byte = 8 bits = 2^8 - max value
    bool - 1 byte = 8 bits
    [0][0][0][0][0][0][0][1]
    */

    cout << "sizeof(int) =" << sizeof(int) << endl;
    cout << "sizeof(float) =" << sizeof(float) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;
    cout << "sizeof(string) = " << sizeof(string) << endl;

    return 0;
}