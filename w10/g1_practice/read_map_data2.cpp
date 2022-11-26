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
    for(int i = 0; i < n; i++){
        pair<string, int> p;
        cin >> p.first >> p.second;
        m.insert(p);
    }

    cout << m.size() << endl;
    show(m);

    return 0;
}