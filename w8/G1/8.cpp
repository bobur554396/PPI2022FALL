#include <iostream>

using namespace std;

// a^b = 2^3 = a * a * a = 8
int f1(int a, int b){
    int res = 1;
    for(int i = 1; i <= b; i++)
        res *= a;
    
    return res;
}

int f(int a, int b){
    if(b == 0)
        return 1;
    else
        return a * f(a, b - 1);
}

/*
1) f(2, 3) -> 2 * f(2, 2)
2) f(2, 2) -> 2 * f(2, 1)
3) f(2, 1) -> 2 * f(2, 0)
4) f(2, 0) -> base case, stop the function returning 1


2^3 = 2 * 2 * 2 => 8
*/

// Task: implement it for 2^-3
int main(){
    int a, b; // a^b
    cin >> a >> b;

    cout << f1(a, b) << " " << f(a, b) << endl;
    

    cout << endl;

    return 0;
}
