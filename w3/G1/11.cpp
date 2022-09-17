#include <iostream>

using namespace std;

int main(){
    /*
    Input: 5 15 4
    Output: 8 12
    */

    int a, b, k;
    cin >> a >> b >> k;

    for(int i = a; i <= b; i++){
        if(i % k == 0)
            cout << i << " ";
    }


    return 0;
}