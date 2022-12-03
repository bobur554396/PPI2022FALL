#include <iostream>

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

bool sort_by_age(Student s1, Student s2){
    // if(s1.age < s2.age)
    //     return true;
    // return false;
    return s1.age > s2.age;
}

bool sort_by_gpa(Student s1, Student s2){
    return s1.gpa > s2.gpa;
}

bool sort_by_gpa2(Student s1, Student s2){
    if(s1.gpa == s2.gpa){
        return s1.age < s2.age;
    }
    return s1.gpa > s2.gpa;
}


void filterByGpa(vector<Student> v, float _gpa){
    for(int i = 0; i < v.size(); i++)
        if(v[i].gpa >= _gpa)
            v[i].show();
}

void searchByName(vector<Student> v, string _name){
    bool ok = false;
    for(int i = 0; i < v.size(); i++){
        if(v[i].name.find(_name) != string::npos){ // -1
            v[i].show();
            ok = true;
        }
    }
    if(!ok)
        cout << "student not found\n";
}


void searchByName2(vector<Student> v, string _name){
    bool ok = false;
    for(int i = 0; i < v.size(); i++){
        if(v[i].name == _name){
            v[i].show();
            ok = true;
        }
    }
    if(!ok)
        cout << "student not found\n";
}


void searchByName3(vector<Student> v, string _name){
    for(int i = 0; i < v.size(); i++){
        if(v[i].name == _name){
            v[i].show();
            return;
        }
    }
    cout << "student not found\n";
}