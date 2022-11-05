#include <iostream>
#include <cmath>

using namespace std;


int f1(int a[], int n){
    int maxi = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > maxi)
            maxi = a[i];
    
    return maxi;
}

int f(int a[], int n){
    if(n == 1) // base case
        return a[0];
    else
        return max(a[n - 1], f(a, n - 1));
}

/*
1) f([4, 9, 7, 2], 4) => max(2, f([4, 9, 7], 3)) = max(2, 9) = 9
2) f([4, 9, 7], 3) => max(7, f([4, 9], 2)) = max(7, 9) = 9
3) f([4, 9], 2) => max(9, f([4], 1)) = max(9, 4) = 9
4) f([4], 1) => base case, finish function returing 4
*/

int main(){
    int n = 4;
    int a[] = {4, 9, 7, 2};


    cout << f1(a, n) << " " << f(a, n);

    cout << endl;

    return 0;
}
