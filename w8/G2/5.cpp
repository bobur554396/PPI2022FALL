#include <iostream>

using namespace std;

void f1(int n){
    for(int i = 1; i <= n; i++)
        cout << i << " ";
}

void f(int n){ // 4
    if(n == 0) // base case
        return;

    f(n - 1);

    cout << n << " ";
}
/*
L - stack of the function "f"
[]
[cout << 1 << " ";]
[cout << 2 << " ";]
[cout << 3 << " ";]
[cout << 4 << " ";]


1) f(4) -> f(3)
2) f(3) -> f(2)
3) f(2) -> f(1)
4) f(1) -> f(0)
5) f(0) -> base case, finish the function.
*/

int main(){
    int n;
    cin >> n; // 4
    // 1 2 3 4

    f(n);

    return 0;
}
