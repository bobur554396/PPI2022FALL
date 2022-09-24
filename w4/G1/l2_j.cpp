#include <iostream>

using namespace std;

int main(){
    int n, x, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        while(x > 0){
            if(x % 10 == 0)
                cnt++;
            x /= 10;
        }
    }

    cout << cnt << endl;

    return 0;
}