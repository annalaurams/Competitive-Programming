#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string n, m;
    cin >> n >> m;
 
    string result;
    int tam = n.length();
 
    for (int i = 0; i < tam; i++) {
        if (n[i] == m[i]) {
            result += "0";
        } else {
            result += "1";
        }
    }
 
    cout << result << endl;
 
    return 0;
}