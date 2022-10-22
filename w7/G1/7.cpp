#include <iostream>

using namespace std;

int c; // Global variable

void sum(int a, int b){
    c = a + b;
}

void sum2(int a, int b){
    c = 10;
}

int main(){
    int a, b;
    cin >> a >> b;

    sum(a, b);
    sum2(a, b);

    cout << c << endl;

    return 0;
}