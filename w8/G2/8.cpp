#include <iostream>

using namespace std;

// 2^3 = 2 * 2 * 2 = 8
int f1(int base, int exp){
    int res = 1;
    for(int i = 0; i < exp; i++)
        res *= base;
    
    return res;
}

int f(int base, int exp){
    if(exp == 0) // base case
        return 1;
    else
        return base * f(base, exp - 1);
}
/*
1) f(2, 3) => 2 * f(2, 2) = 2 * 4 = 8
2) f(2, 2) => 2 * f(2, 1) = 2 * 2 = 4
3) f(2, 1) => 2 * f(2, 0) = 2 * 1 = 2
4) f(2, 0) => base case, finish returning the "1"
*/

int main(){
    // 2^3 = 2 * 2 * 2 = 8
    int base, exp;
    cin >> base >> exp;
    
    cout << f1(base, exp) << " " << f(base, exp); 

    cout << endl;

    return 0;
}
