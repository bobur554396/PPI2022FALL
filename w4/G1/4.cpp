#include <iostream>

using namespace std;

int main(){
    /*
    2
    5
    10
    5
    0

    22
    */
    int n, sum = 0;
    
    // for(;;){
    while(true){
        cin >> n;
        if(n == 0){
            cout << sum << endl;
            return 0;
        }
        sum += n;
    }

    return 0;
}