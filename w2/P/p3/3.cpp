#include <iostream>

using namespace std;

int main(){
    /*
    4, 100, 50, - even
    5, 3, 9 - odd
    */

    int n;
    cin >> n;

    if(n % 2 == 0){
        cout << "even\n";
    }

    if(n % 2 == 1){
        cout << "odd\n";
    }



    return 0;
}
