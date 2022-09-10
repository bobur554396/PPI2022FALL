#include <iostream>

using namespace std;

int main(){

    /*
    1 byte = 8 bit
    [][][][][][][][0/1]
    
    int - 4 bytes = 4 * 8 = 32 bits/cells
    [][]...[][] - 32 bits = 2^32

    float - 4 bytes = 4 * 8 = 32 bits/cells
    double - 8 bytes = 8 * 8 = 64 bits/cells
    bool - 1 bytes = 1 * 8 = 8 bits/cells
    [][][][][][][][1] - 8 bits = 2^8


    char - 1 bytes = 1 * 8 = 8 bits/cells
    [][][][][][][][] - 8 bits = 2^8

    string - 24 bytes = 24 * 8 = 192 bits/cells
    */

    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(bool): " << sizeof(bool) << endl;
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(string): " << sizeof(string) << endl;

    return 0;
}