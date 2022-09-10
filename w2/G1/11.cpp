#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){
    /*
    You are given number N. Your program must calculate
    the result of 2 ^ N;
    Input: 3
    Output: 8

    Solution:
    >> -- shifting bits to the right
    << -- shifting bits to the left
    */
    int n;
    cin >> n;
    
    int a = 1 << n; // shifting the number 1 to the left by n times

    bitset<32> d = a;

    cout << d << endl << a << endl;

    // int a = 
    // bitset<4> d = 2 ^ n; 



    // bitset<4> d = 1; // 2^0
    // bitset<4> d1 = 2; // 2^1
    // bitset<4> d2 = 4; // 2^2
    // bitset<4> d3 = 8; // 2^3

    // cout << d << endl;
    // cout << d1 << endl;
    // cout << d2 << endl;
    // cout << d3 << endl;

    // cout << pow(2, n) << endl;
    return 0;
}