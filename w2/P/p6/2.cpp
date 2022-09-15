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

    if(a > b){ // 10 > 5
        cout << "if block\n";
        cout << a << endl;
    } else {
        cout << "else block\n";
        cout << b << endl;
    }


    return 0;
}