#include <iostream>

using namespace std;

void f1(int n){
    for(int i = n; i > 0; i--)
        cout << i << " ";
}

void f(int n){
    if(n == 0) // base case
        return;
    
    cout << n << " ";

    f(n - 1);
}
/*
1) f(4) -> cout << 4; f(3)
2) f(3) -> cout << 3; f(2)
3) f(2) -> cout << 2; f(1)
4) f(1) -> cout << 1; f(0)
5) f(0) -> base case, finish the function
*/

int main(){
    int n;
    cin >> n; // 4
    // 4 3 2 1

    f(n);

    return 0;
}
