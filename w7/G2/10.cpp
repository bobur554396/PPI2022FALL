#include <iostream>

using namespace std;

/*
cmath -> pow(2, 3) => 2^3 = 2 * 2 * 2 = 8

pow(base, exp)


1) res = 1 * 2 = 2
2) res = 2 * 2 = 4
3) res = 4 * 2 = 8
*/

int my_pow(int base, int exp){ // base = 2, exp = 3
    int res = 1;
    for(int i = 0; i < exp; i++){
        res *= base;
    }
    return res;
}

int main(){
    int a, b;
    cin >> a >> b;
    
    cout << my_pow(a, b) << endl;

    return 0;
}