#include <iostream>

using namespace std;

int main(){

    /*
    10 20 3

    12 15 18
    */
    
    int a, b, k;
    cin >> a >> b >> k;

    for(int i = a; i < b; i++){
        if(i % k == 0)
            cout << i << " ";
    }

    

    cout << endl;

    return 0;
}