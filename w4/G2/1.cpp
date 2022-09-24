#include <iostream>

using namespace std;

int main(){
    // prime numbers: 2, 3, 5, 7, 23
    // not prime: 4, 6, 9, 15, 21

    // i = 1 2 3 4 5 6 7 8 9 10
    // n = 10
    // 


    int n, cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cnt++;
        }
    }

    if(cnt == 2)
        cout << "yes" << endl;
    else 
        cout << "no" << endl;
    

    return 0;
}