#include <iostream>

using namespace std;

int main(){
    // can you draw triangle a, b, c
    int a, b, c;
    cin >> a >> b >> c;
    
    // && - and - all conditions must be true
    if(a + b > c && a + c > b && b + c > a){
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    

    return 0;
}