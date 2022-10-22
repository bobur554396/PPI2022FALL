#include <iostream>

using namespace std;

int sum(int a, int b){
    int c = a + b; // local variable
    return c;
}

int main(){
    int a, b;
    cin >> a >> b;

    // cout << c << endl;
    // int res = sum(a, b);
    cout << sum(a, b) << endl;

    return 0;
}