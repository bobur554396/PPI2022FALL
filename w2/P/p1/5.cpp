#include <iostream>

using namespace std;

int main(){
    // can you draw triangle a, b, c
    int a, b, c;
    cin >> a >> b >> c;
    
    bool ok = false;
    if(a + b > c){
        if(a + c > b) {
            if(b + c > a){
                cout << "yes\n";
                ok = true;
            }
        }
    }

    if(ok == false)
        cout << "no\n";

    

    return 0;
}