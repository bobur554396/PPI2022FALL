#include <iostream>

using namespace std;

int main(){
    /*
    Your are given 3 sides of triangle: a, b, c;
    Is there any triangle?

    Solution:
    a + b > c and a + c > b and b + c > a
    */
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a){
        cout << "yes" << endl;
        cout << "yes" << endl;
        cout << "yes" << endl;
    } else {
        cout << "no";
    }

    return 0;
}