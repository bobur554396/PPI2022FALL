/*

N -> binary number (4 bit exactly) 0000

reverse: (0001) = (1000)
invert: ~(0001) = (1110)

Example:

0 -> 0000 -> reverse -> 0000 = 0
1 -> 0001 -> reverse -> 1000 = 8
2 -> 0010 -> reverse -> 0100 = 4
3 -> 0011 -> reverse -> 1100 = 12
12 -> 1100 -> reverse -> 0011 = 3
*/
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n; // 12
    
    int a = n % 2; // 0
    n /= 2; // 6

    int b = n % 2; // 0
    n /= 2; // 3
    
    int c = n % 2; // 1
    n /= 2; // 1

    int d = n % 2; // 1
    n /= 2; 
    
    // 12 -> 1100 -> dcba -> reverse -> abcd -> 0011
    
    cout << (a*8 + b*4 + c*2 + d*1) << endl;



    return 0;
}
