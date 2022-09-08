#include <iostream>

using namespace std;

int main(){

    // input a = 2; b = 3; k = 2.5; Result = (2+3)*2.5 = 12.5;

    int a, b;
    cout << "Enter two integer numbers...\n";
    cin >> a >> b;

    float k;
    cout << "Enter value of K...\n";
    cin >> k;

    cout << "Result: " << (a + b) * k << endl;    

    return 0;
}