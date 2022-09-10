#include <iostream>

using namespace std;

int main(){
    /*
    +=, -=, *=, /=, %= 
    */
    int a = 2;
    a += 2; // 5 = 5 + a; = a = 2 + 5 = 7;
    a -= 2; // a = a - 2; 7 - 2 = 5
    a %= 2; // a = a % 2; 5 % 2 = 1

    int b = 0;
    b += a; // b = b + a = 0 + 1 = 1

    cout << a << " " << b <<  endl;

    return 0;
}