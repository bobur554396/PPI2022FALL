#include <iostream>
#include <vector>

using namespace std;

struct Student {
    string id; // fields of the structure
    string name; // properties of the structure
    int age;
    float gpa;

    void read(){
        cin >> id >> name >> age >> gpa;
    }

    void show(){ // function / method / procedure
        cout << id << " " << name << " " << age << " " << gpa << endl;
    }
};


int main(){
    /*
    4
    4 5 2 6
    */
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    

    sort(a, a + n);


    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    

    return 0;
}