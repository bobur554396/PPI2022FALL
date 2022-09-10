#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    /*
    Your are given one integer number N;
    Your task is to find: 2 ^ N;
    Note: you can not use pow function from cmath.

    Input: 1
    Output: 2

    Input: 3
    Output: 8

    Solution: 
    >> shift to right
    << shift to left
    */

    // shift number 1 to the left by 1 position
    // int a = (1 << 0); == 1
    // int a = (1 << 1); == 2
    // int a = (1 << 2);
    // bitset<4> b = a; 
    // cout << b << endl << a << endl; 
   
    int n;
    cin >> n;

    int a = (1 << n);
    bitset<4> b = a; 
    cout << a << endl << b << endl;

    // cout << pow(2, n) << endl;

    // bitset<4> b1 = 1; // 2 ^ 0
    // bitset<4> b2 = 2; // 2 ^ 1
    // bitset<4> b3 = 4; // 2 ^ 2
    // bitset<4> b4 = 8; // 2 ^ 3

    // cout << b1 << endl;
    // cout << b2 << endl;
    // cout << b3 << endl;
    // cout << b4 << endl;

    

    return 0;
}