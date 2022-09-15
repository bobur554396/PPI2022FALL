#include <iostream>

using namespace std;

int main(){
    // Conditional statements
    /*

    if(condition){
        instructions/expression of the "if" block
    } else {
        instructions/expression of the "else" block
    }
    */
    int a, b;
    cin >> a >> b; 

    if(a > b){ // 2 > 2
        cout << a << endl;
    } else if (b > a) { // 2 > 2
        cout << b << endl;
    } else if (a == b ){
        cout << "they are equal\n";
    }
    a = 2; //assinging value
    bool ok = a == 2; // asking question from compiler: is "a" equal to 2?


    return 0;
}