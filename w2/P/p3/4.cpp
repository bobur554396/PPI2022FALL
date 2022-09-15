#include <iostream>

using namespace std;

int main(){
    /*
    95: A
    90: A-
    86: B+
    ...
    */
    int n;
    cin >> n;
    
    // 1 && 1
    if(n >= 95 && n <= 100){ // 95 <= n <= 100
        cout << "A" << endl; 
    } else if (n >= 90 && n < 95){
        cout << "A-" << endl;
    } else if(n >= 85 && n < 90){
        cout << "B+" << endl;
    } else {
        cout << "D" << endl;
    }


    return 0;
}
