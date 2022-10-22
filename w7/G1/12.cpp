#include <iostream>

using namespace std;

int fact(int n){
    int res = 1;
    for(int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int n;
    cin >> n; // 4 -> 1 * 2 * 3 * 4 = 24

    cout << fact(n) << endl;
    cout << fact(5) << endl;
    cout << fact(6) << endl;

    return 0;
}
