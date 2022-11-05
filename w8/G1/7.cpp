#include <iostream>

using namespace std;

int f1(int n){
    int res = 0;
    for(int i = 1; i <= n; i++)
        res += i;
    
    return res;
}

int f(int n){
    if(n == 1)
        return 1;
    else
        return n + f(n - 1);
}

/*
1) f(4) -> 4 + f(3)
2) f(3) -> 3 + f(2)
3) f(2) -> 2 + f(1)
4) f(1) -> base case, stop the functuion returing 1

*/
int main(){
    int n;
    cin >> n;
    // n = 4 => 1 + 2 + 3 + 4 = 10

    cout << f1(n) << " " << f(n) << endl;
    


    return 0;
}
