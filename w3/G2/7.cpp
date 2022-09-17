#include <iostream>

using namespace std;

int main(){

    /*
    10 20 4

    12
    */
    
    int a, b, k;
    cin >> a >> b >> k;

    int hello = 0;
    for(int i = a; i < b; i++){ // i = 13
        if(i % k == 0)
            hello++; // 
    }

    cout << hello << endl;
    
    return 0;
}