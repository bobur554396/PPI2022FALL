#include <iostream>

using namespace std;

int main(){
    // prime numbers: 2, 3, 5, 7, 11, 
    // not prime: 10, 15, 20
    int n;
    cin >> n;
    
    // N -> 2 ... sqrt(n); n / 2

    for(int i = 2; i <= n / 2; i++){ // i = 3, 5, n = 15
        if(n % i == 0){
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;

    return 0;
}