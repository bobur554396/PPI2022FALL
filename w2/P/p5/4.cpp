#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a > b){ // 3 > 3
        cout << a << endl;
    } else if(b > a) {
        cout << b << endl;
    } else {
        cout << "equal" << endl;
    }



    return 0;
}