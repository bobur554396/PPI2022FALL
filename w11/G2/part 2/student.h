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


void filterByGpa(Student v[], int n, float _gpa){
    for(int i = 0; i < n; i++)
        if(v[i].gpa >= _gpa)
            v[i].show();
}


void seachByID(Student v[], int n, string pattern){
    bool found = false;
    for(int i = 0; i < n; i++){
        if(v[i].id.find(pattern) != string::npos){ // -1
            v[i].show();
            found = true;
        }
    }
    if(!found)
        cout << "Student with this ID not found\n";
}


void seachByID2(Student v[], int n, string pattern){
    bool found = false;
    for(int i = 0; i < n; i++){
        if(v[i].id == pattern){
            v[i].show();
            found = true;
        }
    }
    if(!found)
        cout << "Student with this ID not found\n";
}

void seachByID3(Student v[], int n, string pattern){
    for(int i = 0; i < n; i++)
        if(v[i].id == pattern)
            v[i].show();
}