#include <iostream>

using namespace std;

int main(){
    // prime numbers: 2, 3, 5, 7, 23
    // not prime: 4, 6, 9, 15, 21

    // i = 2 3 4 5 6 7 8 9
    // n = 10
    // 
    int n;
    cin >> n;

    bool flag = true;
    for(int i = 2; i < n; i++){    
        if(n % i == 0){
            cout << "no" << endl;
            flag = false;
            break;
        }
    }

    if(flag == true)
        cout << "yes" << endl;

    

    return 0;
}