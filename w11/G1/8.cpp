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

bool sort_by_age(Student s1, Student s2){
    // if(s1.age < s2.age)
    //     return true;
    // return false;
    return s1.age < s2.age;
}

bool sort_by_gpa(Student s1, Student s2){
    if(s1.gpa == s2.gpa){
        if(s1.age < s2.age)
            return true;
    }
    if(s1.gpa < s2.gpa)
        return true;
    return false;
}

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

    sort(v.begin(), v.end(), sort_by_gpa);

    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }
    
   

    return 0;
}
