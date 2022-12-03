#include <iostream>
#include <vector>

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
    vector<Student> v;
    for(int i = 0; i < n; i++){
        Student s;
        s.read();
        v.push_back(s);
    }

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }
    
   

    return 0;
}
