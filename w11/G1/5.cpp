#include <iostream>

using namespace std;

struct Student {
    string id; 
    string name;
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
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    Student a[n];
    for(int i = 0; i < n; i++){
        a[i].read();
    }

    // logic
    
    for(int i = 0; i < n; i++){
        a[i].show();
    }
   

    return 0;
}