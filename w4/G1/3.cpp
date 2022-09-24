#include <iostream>

using namespace std;

int main(){
    // Factorial
    /*
    N! = 1...(*)...N

    4! = 1 * 2 * 3 * 4
    */
    int n;
    cin >> n;

    // f = 1 * 1 = 1
    // f = 1 * 2 = 2
    // f = 2 * 3 = 6
    // f = 6 * 4 = 24
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }

    cout << f << endl;

    return 0;
}