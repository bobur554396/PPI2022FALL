#include <iostream>

using namespace std;

int f1(int n){
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    
    return res;
}

int f(int n){ // 4
    if(n == 1) // base case
        return 1;
    else
        return n * f(n - 1);
 
}
/*

1) f(4) -> 4 * f(3) = 4 * 6 = 24
2) f(3) -> 3 * f(2) = 3 * 2 = 6
3) f(2) -> 2 * f(1) = 2 * 1 = 2
4) f(1) -> base case, finish the function returing the 1
*/

int main(){
    int n;
    cin >> n; // 4!
    // 4! = 1 * 2 * 3 * 4 = 24

    cout << f1(n) << " " << f(n); 

    cout << endl;

    return 0;
}
