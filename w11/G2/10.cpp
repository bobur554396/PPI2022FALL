#include <iostream>
#include <vector>

using namespace std;

bool cmp(int a, int b){
    // if(a > b)
    //     return true;
    // return false;
    return a > b;
}

int main(){
    int a[] = {4,5,2,6};

    // cout << *(a + 0) << endl; // a[0]
    // cout << *(a + 1) << endl; // a[1]
    // cout << *(a + 2) << endl; // a[2]
    // cout << *(a + 3) << endl; // a[3]

    sort(a, a + 4, cmp);


    for(int i = 0; i < 4; i++)
        cout << a[i] << " ";
    
    
    

    return 0;
}