#include <iostream>

using namespace std;

int sum(int n, int m){
    return n + m;
}

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}

int min(int a, int b){
    if(a < b)
        return a;
    return b;
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << sum(a, b) << endl;
    cout << max(a, b) << endl;


    return 0;
}