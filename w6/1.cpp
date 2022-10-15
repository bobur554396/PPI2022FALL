#include <iostream>

using namespace std;

int main(){
    // array and it values in memory 

    int a[] = {2, 10, 5, 7};

    cout << *(a + 0) << endl; // cout << a[0];
    cout << *(a + 1) << endl; // cout << a[1];
    cout << *(a + 2) << endl; // cout << a[2];
    cout << *(a + 3) << endl; // cout << a[3];
    // cout << *(a + 4) << endl; // random number - we don't have this index

    

    return 0;
}