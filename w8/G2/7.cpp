#include <iostream>

using namespace std;

int f1(int n){
    int res = 0;
    for(int i = 1; i <= n; i++)
        res += i;
    
    return res;
}

int f(int n){ // 4
    if(n == 1) // base case
        return 1;
    else
        return n + f(n - 1);
 
}
/*

*/

int main(){
    int n;
    cin >> n; // 4!
    // n = 4 => 1 + 2 + 3 + 4 = 10

    cout << f1(n) << " " << f(n); 

    cout << endl;

    return 0;
}
