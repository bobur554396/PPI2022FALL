#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - [ ] convert char to number (ascii)
    char c = '8';

    cout << int(c) << endl;
    cout << int('0') << endl;
    int n = int(c) - int('0');

    cout << n * 2 << endl;

    return 0;
}