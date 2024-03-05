#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    string str;

    while (n--) {

        cin >> str;

        sort(str.begin(), str.end());

        do {
            cout << str << endl;
        } while (next_permutation(str.begin(), str.end()));

        cout << endl;
    }
    
    return 0;
}