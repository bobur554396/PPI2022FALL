#include <iostream>

using namespace std;

int main(){
    // Conditional statements

    /*  

        if(condition) {
            instructions/expressions of "if" block
        } else {
            instructions/expressions of "else" block
        }

    */
    int a, b;
    cin >> a >> b;

    if(a == b){
        cout << "equal" << endl;
    } else if(b > a) {
        cout << b << endl;
    } else {
        cout << a << endl;
    }


    return 0;
}