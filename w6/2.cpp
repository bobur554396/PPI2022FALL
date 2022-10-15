#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // sort, reverse
    int a[] = {2, 10, 5, 7}; 
    // cout << *(a + 0) << endl; // cout << a[0];
    // cout << *(a + 1) << endl; // cout << a[1];
    // cout << *(a + 2) << endl; // cout << a[2];
    // cout << *(a + 3) << endl; // cout << a[3];

    sort(a, a + 4);
    reverse(a, a + 4);
    // a - address of the first element
    // a + 4 - address of the last element + 1

    for(int i = 0; i < 4; i++)
        cout << a[i] << " ";
    

    return 0;
}