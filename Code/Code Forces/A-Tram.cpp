 
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
 
    int n = 0, result = 0, asw = 0, aux = 0;
 
    cin >> n;
    aux = n;
 
    vector<pair<int, int>> vec(n);
 
    while (aux--) {
 
        int first, second;
 
        cin >> first >> second;
 
        vec.push_back(make_pair(first, second));
    }
 
    for (int i = 0; i < vec.size(); i++) {
 
        asw += vec[i].second - vec[i].first;
        result = max(result, asw);
    }
 
    cout << result << endl;
 
    return 0;
}