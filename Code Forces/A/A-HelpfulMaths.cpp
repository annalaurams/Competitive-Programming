#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    string str, s;
    map<int, int> mapa;
 
    getline(cin, str);
    istringstream iss(str);
 
    while (getline(iss, s, '+')) {
        int num = stoi(s);
        mapa[num]++;
    }
 
    bool first = true;
 
    for (auto &pair : mapa) {
 
        for (int i = 0; i < pair.second; ++i) {
 
            if (!first) cout << "+";
            
            cout << pair.first;
            first = false;
        }
    }
 
    cout << endl;
 
    return 0;
}
 