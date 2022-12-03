#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int *p; // pointer variable
    p = &a; // store address of "a" in pointer "p"

    cout << p << endl;
    cout << &a << endl;
    cout << *p << endl;
    
    *p = 5; // chaging the value if "a" using address
    cout << a << endl;

    
    


    return 0;
}