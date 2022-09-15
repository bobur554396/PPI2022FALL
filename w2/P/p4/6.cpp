#include <iostream>

using namespace std;

int main(){
    /*
    Can we draw triangle, if we have three sides of it.
    a, b, c - sides of triangle.
    */

    int a, b, c;
    cin >> a >> b >> c;

    // (1 && 1 && 1) => 1
    if(a + b > c && a + c > b && b + c > a) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    



    return 0;
}