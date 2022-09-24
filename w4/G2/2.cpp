#include <iostream>

using namespace std;

int main(){
    // - [ ] Fibonacci sequence (0, 1, 1, 2, 3, 5, 8, ...)

    /*
    n1 = 0, n2 = 1, next = n1 + n2;

1)   0    1     1   
     n1   n2   next

2)   0    1     1     2 
          n1    n2   next

3)   0    1     1     2    3  
                n1    n2   next

    */ 
    int n;
    cin >> n;

    int n1 = 0, n2 = 1, next;
    for(int i = 0; i < n; i++){
        if(i == 0)
            cout << n1 << " ";
        else if(i == 1)
            cout << n2 << " ";
        else {
            next = n1 + n2;
            cout << next << " ";
            n1 = n2;
            n2 = next;
        }
    }

    cout << endl;
    

    return 0;
}