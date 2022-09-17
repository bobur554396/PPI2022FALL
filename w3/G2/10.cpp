#include <iostream>

using namespace std;

int main(){
    /*
    Infinity loop
    */
    // int n = 0;
    // for( ; ; ){
    //     cout << n++ << endl;
    // }
    
    int n = 0;
    while(true){ // 1 == 1, 1 < 10 ...
        cout << n++ << " "; 
    }
    return 0;
}