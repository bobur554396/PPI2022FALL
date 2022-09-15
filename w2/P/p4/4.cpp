/*

reverse: abcd -> dcba 
invert: ~(0010) -> 1101

N -> binary -> reverse -> decimal

1111

0 -> 0000 -> 0000 -> 0
2 -> 0010 -> 0100 -> 4
3 -> 0011 -> 1100 -> 12
12 -> 1100 -> 0011 -> 3
*/

#include <iostream>

using namespace std;

int main(){
    /*
    4, 6, 10, 100, ... - even
    3, 5, 7, 9, 15, ... - odd
    */
    int n;
    cin >> n;

    if(n % 2 == 0){
        cout << "even" << endl;
    } 

    if(n % 2 == 1){
        cout << "odd" << endl;
    } 



    return 0;
}