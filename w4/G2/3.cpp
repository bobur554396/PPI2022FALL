#include <iostream>

using namespace std;

int main(){
    // Factorial
    // n! = 1 ... n
    // 4! = 1 * 2 * 3 * 4
    int n;
    cin >> n;

    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
    }

    cout << res << endl;

    return 0;
}