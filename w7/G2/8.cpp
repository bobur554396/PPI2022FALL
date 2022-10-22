#include <iostream>

using namespace std;

int res; // Global variable

void sum(int n, int m){
    res = n + m;
}

void sum2(){
    res = 10;
}

int main(){
    int a, b;
    cin >> a >> b;

    sum(a, b);
    sum2();

    cout << res << endl;

    return 0;
}