#include <iostream>

using namespace std;

int main(){
    /*
    123 = 1 + 2 + 3

    1) n = 123, sum = 0
       k = n % 10; // 3     
       sum += k
       n /= 10

    2) n = 12
       k = n % 10; // 2    
       sum += k
       n /= 10
    
    3) n = 1
       k = n % 10; // 1   
       sum += k
       n /= 10
    */
    int n, sum = 0;
    cin >> n;

    for(;n > 0; n /= 10)
        sum += n % 10;
    
    cout << sum << endl;

    return 0;
}