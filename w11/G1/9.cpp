#include <iostream>
#include <vector>

using namespace std;

bool cmp(int a, int b){ // comparator 
    // if (a > b)
    //     return true;
    // return false;
    return a > b;
}

int main(){
    

    // string s = "hello";
    // sort(s.begin(), s.end());
    // cout << s << endl;
    
    int a[3] = {5, 2, 6};

    sort(a, a + 3, cmp);

    // cout << *(a + 0) << endl; // a[0]
    // cout << *(a + 1) << endl; // a[1]
    // cout << *(a + 2) << endl; // a[2]

    for(int i = 0; i < 3; i++) 
        cout << a[i] << " ";
    
    cout << endl;

    return 0;
}
