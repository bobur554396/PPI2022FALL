#include <iostream>
#include <vector>

using namespace std;

int a[4];

int main(){
    int *p = a;
    *p = 2; // a[0] = 2;
    
    p++;
    *p = 3; // a[1] = 3;

    p++;
    *p = 5; // a[2] = 5;

    p++;
    *p = 7; // a[3] = 7;

    vector<int> v(a, a + 4);

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << endl;



    return 0;
}