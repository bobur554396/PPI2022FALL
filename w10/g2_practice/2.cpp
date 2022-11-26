#include <iostream>
#include <map>

using namespace std;

void show_map_data(map<string, int> m){
    map<string, int>::iterator it = m.begin();
    while(it != m.end()){
        // cout << it->first << " " << it->second << endl;
        // cout << (*it).first << " " << (*it).second << endl;
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }
    cout << endl;
}

int main(){
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    string s;
    int p;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        cin >> s >> p;
        m[s] = p;
    }
    m["student5_from_code"] = 38;
    
    // int a = 2;
    pair<string, int> p_1("student6_from_code", 39);

    // int a;
    // a = 2;
    pair<string, int> p_2;
    p_2.first = "student7_from_code";
    p_2.second = 40;

    m.insert(p_1);
    

    

    cout << m.size() << endl;
    show_map_data(m);


    return 0;
}