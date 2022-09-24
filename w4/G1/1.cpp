#include <iostream>

using namespace std;

int main(){
    // prime numbers: 2, 3, 5, 7, 11, 
    // not prime: 10, 15, 20
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            cnt++;
    }

    if(cnt == 2)
        cout << "yes" << endl;
    else
        cout << "not" << endl;

    return 0;
}