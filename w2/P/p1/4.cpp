#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a > b){
        cout << a;
        cout << a * 2;
    } else
        cout << b;

    return 0;
}