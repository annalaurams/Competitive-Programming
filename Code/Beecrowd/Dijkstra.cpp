#include <iostream>
#include <unordered_map>
 
using namespace std;
 
int main() {

    unordered_map<string, int> mapa;
    string n;

    while (cin >> n ){

        mapa[n] +=1;
    }

    int result;
    result = mapa.size();

    cout << result << endl;
 
    return 0;
}