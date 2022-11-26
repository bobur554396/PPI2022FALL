#include <iostream>
#include <map>

using namespace std;

void show(map<string, int> m){
    map<string, int>::iterator it = m.begin();
    while(it != m.end()){
        // cout << it->first << " " << it->second << endl;
        cout << (*it).first << " " << (*it).second << endl;
        it++;
    }
    cout << endl;
}

int main(){
    freopen("in.txt", "r", stdin);

    int n;
    cin >> n;
    map<string, int> m;
    string name;
    int points;
    for(int i = 0; i < n; i++){
        cin >> name >> points;
        m[name] = points;
    }

    // pair<string, int> p("student_from_code", 39);
    pair<string, int> p;
    p.first = "student_from_code";
    p.second = 39;
    m.insert(p);

    cout << m.size() << endl;
    show(m);

    return 0;
}