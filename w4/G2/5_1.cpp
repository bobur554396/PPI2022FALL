#include <iostream>

using namespace std;

int main(){
    /*
    n = 123,  res = 1 + 2 + 3 = 6
    
1)  n = 123, sum = 0
    k = n % 10; // 3
    sum += k
    n = n / 10; // 12


2)  n = 12
    k = n % 10; // 2
    sum += k
    n = n / 10; // 1

3)  n = 1
    k = n % 10; // 1
    sum += k
    n = n / 10; // 0
    */
    int n, sum = 0;
    cin >> n; // 123

    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    cout << sum << endl;

    


    return 0;
}