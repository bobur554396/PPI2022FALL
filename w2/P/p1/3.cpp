#include <iostream>

using namespace std;

int main(){
    /*
    Input: 96
    Output: A

    Input: 90
    Output: A-

    Input: 85
    Output: B+
    */
    int n;
    cin >> n;

    if(n >= 95){
        cout << "A\n";
    } else if (n >= 90) {
        cout << "A-\n";
    } else if (n >= 85) {
        cout << "B+\n";
    } else {
        cout << "D\n";
    } 
    

    return 0;
}