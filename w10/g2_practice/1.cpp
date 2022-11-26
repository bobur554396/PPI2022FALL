#include <iostream>
#include <map>

using namespace std;

void show_map_data(map<string, int> m){
    map<string, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
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

    cout << m.size() << endl;
    show_map_data(m);


    return 0;
}