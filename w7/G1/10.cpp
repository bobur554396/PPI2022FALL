#include <iostream>

using namespace std;

int sum(int a, int b){ 
    int c = a + b;
    return c;
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
