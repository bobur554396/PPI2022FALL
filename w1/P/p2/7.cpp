#include <iostream>
#include <cmath>

using namespace std;

int main(){
    /*
    You are give two sides of right triangle: a, b.
    You have to find third side of the triangle.
    
    Input: 3 4
    Output: 5
    */

    /*
    Solution:
    Formula: c^2 = a^2 + b^2
    c = sqrt(a^2 + b^2)
    */

    int a, b;
    cin >> a >> b;

    float c = sqrt(pow(a, 2) + pow(b, 2));

    cout << c << endl;

    return 0;
}