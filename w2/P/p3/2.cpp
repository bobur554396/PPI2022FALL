#include <iostream>

using namespace std;

int main(){
    // Conditional statements
    
    int a, b;
    cin >> a >> b;

    if(a > b){ // 2 > 2
        cout << a << endl;
    } else if(b > a) {
        cout << b << endl;
    } else {
        cout << "equal" << endl;
    }


    return 0;
}
