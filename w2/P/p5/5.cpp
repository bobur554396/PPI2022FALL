#include <iostream>

using namespace std;

int main(){
    // 4, 6, 10, 100 - even
    // 3, 5, 7, 15 - odd

    int n;
    cin >> n;

    if(n % 2 == 0){
        cout << "even" << endl;
    } else if(n % 2 == 1) {
        cout << "odd\n";
    }


    return 0;
}