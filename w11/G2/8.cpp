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



int main(){
    /*
    4
    22B123123 Student1 20 3.8
    22B123124 Student2 21 3.9
    22B123125 Student3 18 4.0
    22B123126 Student4 19 3.5
    */
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

    sort(v.begin(), v.end(), sort_by_gpa2);


    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }


    return 0;
}