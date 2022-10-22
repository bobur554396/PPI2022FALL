#include <iostream>

using namespace std;
// is Prime?
// [1...sqrt(n / 2)]
 
bool is_prime(int n){ // n = 10
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0) // 10 % 2 == 0
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    // if(!is_prime(n)) // if(is_prime(n) == false)
    if(is_prime(n)) // if(is_prime(n) == true)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    
    return 0;
}
