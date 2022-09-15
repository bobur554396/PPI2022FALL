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
    } 
    
    if (b > a) { // 2 > 2
        cout << b << endl;
    }

    if (a == b ){
        cout << "they are equal\n";
    }


    return 0;
}