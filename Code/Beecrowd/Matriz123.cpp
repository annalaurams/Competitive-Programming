#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n = 0;

    while (cin >> n) {

        vector<vector<int>> m(n, vector<int>(n, 3));

        for (int i = 0; i < n; i++) 
            m[i][i] = 1;
        
        for (int i = 0; i < n; i++) 
            m[i][n-i-1] = 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << m[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}