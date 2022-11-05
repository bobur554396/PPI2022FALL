#include <iostream>
#include <cmath>

using namespace std;

int f1(int a[], int n){
    int maxi = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > maxi)
            maxi = a[i];
    }
    return maxi;
}

int f(int a[], int n){
    if(n == 1)
        return a[0];
    else
        return max(a[n - 1], f(a, n - 1));
}
/*


1) f([2, 10, 4, 6], 4) => max(6, f([2, 10, 4], 3)) => max(6, 10) => 10
2) f([2, 10, 4], 3) => max(4, f([2, 10], 2)) => max(4, 10) => 10
3) f([2, 10], 2) => max(10, f([2], 1)) => max(10, 2) => 10
4) f([2], 1) => base case, finish returning a[0] => 2
*/

int main(){
    int a[] = {2, -10, 4, 6};

    cout << f1(a, 4) << " " << f(a, 4) << endl;
    

    cout << endl;

    return 0;
}
