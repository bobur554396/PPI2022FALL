#include <iostream>

using namespace std;

int main(){

    /*
    Your are given one lowercase letter.
    Task: convert letter to upper.
    
    Input: a
    Output: A
    */

   /*
   Solution:
   a -> 97
   A -> 65
   */
    char c;
    cin >> c;

    int a = (int) c;
    int b = a - 32;

    cout << (char) b << endl;

    
    return 0;
}