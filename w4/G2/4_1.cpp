#include <iostream>

using namespace std;

int main(){
    // 2 6 7 5 10 0
    // 30
    int n, sum = 0;
    while(true){
        cin >> n;
        if(n == 0)
            break;

        sum += n;
    }

    cout << sum << endl;

    return 0;
}