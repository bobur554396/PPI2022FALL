#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout << sqrt(9) << endl; // sqrt - square root of some number
    cout << pow(2, 3) << endl; // pow - power of some number: a^b
    cout << abs(10-12) << endl; // abs - absolute value |10-12| = 2
    
    float pi = 3.14;
    cout << M_PI << endl;
    cout << sin(M_PI/2) << endl; // 90D => 90 * P / 180 = P / 2
    // 6.12323e-17 = 6.12 * 10^-17 ~= 0
    cout << cos(M_PI/2) << endl; // 90D => 90 * P / 180 = P / 2
    
    // 1.63312e+16 = 1.6 * 10^16
    cout << tan(45 * M_PI/180) << endl; // 90D => 90 * P / 180 = P / 2
    cout << 1 / tan(45 * M_PI/180) << endl; // 90D => 90 * P / 180 = P / 2
    
    return 0;
}
