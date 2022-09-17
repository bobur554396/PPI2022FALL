#include <iostream>

using namespace std;

int main(){
    /*
    Input: 5 15 4
    Output: 2
    */

    int a, b, k;
    cin >> a >> b >> k;

    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(i % k == 0)
            cnt++;
    }

    cout << cnt << endl;


    return 0;
}