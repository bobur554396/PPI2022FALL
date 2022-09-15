#include <iostream>

using namespace std;

int main(){
    // 4, 6, 10, 100 -- even
    // 3, 5, 9, 15 -- odd
    int n;
    cin >> n;

    if(n % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl; 
    }


    return 0;
}