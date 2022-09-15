#include <iostream>

using namespace std;

int main(){
    /*
    Points of the student.
    Convert poits to letter representation.

    Example:
    97: A
    93: A-
    87: B+
    ...

    Solution:
    95 <= n <= 100:  A
    90 <= n < 95:  A-
    85 <= n < 90:  B+
    ...
    */
    int n;
    cin >> n;

    // (1 && 1) => 1
    if(n >= 95 && n <= 100) {
        cout << "A" << endl;
    } else if (n >= 90 && n < 95){
        cout << "A-" << endl;
    } else if (n >= 85 && n < 90){
        cout << "B+" << endl;
    } else {
        cout << "D" << endl;
    }



    return 0;
}