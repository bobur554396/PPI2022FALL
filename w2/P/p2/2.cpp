#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a == b){
        cout << "equal\n";
    } else if (a > b){
        cout << a << endl;
    } else if (b > a){
        cout << b << endl;
    }

    // if(a > b){
    //     cout << a << endl;
    // } else if(b > a) {
    //     cout << b << endl;
    // } else {
    //     cout << "equal\n";
    // }

    return 0;
}