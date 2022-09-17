#include <iostream>

using namespace std;

int main(){

    int a[4];
    // int a[]; -- wrong
    float b[] = {2.3, 4.5, 6.8, 3.9};
    float b[4] = {2.3, 4.5, 6.8, 3.9};
    float b[10] = {2.3, 4.5, 6.8, 3.9};
    // float b[3] = {2.3, 4.5, 6.8, 3.9}; - wrong
    bool flags[] = {true, false, true};
    char c[] = {'k', 'b', 't', 'u'};
    string w = "kbtu";
    
    return 0;
}