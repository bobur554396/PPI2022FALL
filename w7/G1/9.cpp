#include <iostream>

using namespace std;

int sum(int a, int b); // declare the function
int max(int a, int b);

int main(){
    int a, b;
    cin >> a >> b;

    cout << sum(a, b) << endl;

    return 0;
}

int sum(int a, int b){ // implementation of the function
    int c = a + b;
    return c;
}