#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    /*
    95 - 100 = A
    90 - 95 = A-
    85 - 90 = B+
    ... = D
    */
    
    // && - and, ||
    if(n >= 95 && n <= 100)
        cout << "A" << endl;
    else if(n >= 90 && n < 95)
        cout << "A-" << endl;
    else if(n >= 85 && n < 90)
        cout << "B+" << endl;
    else
        cout << "D" << endl;

    return 0;
}