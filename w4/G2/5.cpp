#include <iostream>

using namespace std;

int main(){
    /*
    n = 123,  res = 1 + 2 + 3 = 6
    */
    int n;
    cin >> n;

    int n1 = n / 100;
    int n2 = n / 10 % 10;
    int n3 = n % 10;

    cout << n1 + n2 + n3 << endl;


    return 0;
}