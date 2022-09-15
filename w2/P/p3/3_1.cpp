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
    } else {
        cout << "odd" << endl;
    }



    return 0;
}
