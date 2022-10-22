#include <iostream>

using namespace std;

/*
power(base, exp) => base^exp

my_pow(2, 3)

2^3 = 2 * 2 * 2 = 8

2^-3 = 1 / (2 * 2 * 2) = 1 / 8 = 0.125

1) res = 1 * 2 = 2
2) res = 2 * 2 = 4
3) res = 4 * 2 = 8
*/

float my_pow(int base, int exp){
    float res = 1;
    for(int i = 0; i < abs(exp); i++){
        res = res * base;
    }
    if(exp < 0)
        return 1 / res;
    return res;
}

int main(){
    int a, b;
    cin >> a >> b;

    float res = my_pow(a, b);

    cout << res << endl;

    return 0;
}
