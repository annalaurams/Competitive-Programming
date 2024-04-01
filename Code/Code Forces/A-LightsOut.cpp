#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    bool matriz[3][3];
    int num;
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = 1;
        }
    }
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> num;
 
            if (num % 2 == 0) continue;
            
            else {
 
                vector<pair<int, int>> moves = { {0,1}, {0,-1}, {1,0}, {-1,0}, {0,0} };
 
                for (pair<int, int> m : moves) {
                    int u = i + m.first;
                    int v = j + m.second;
 
                    if (u >= 0 && u < 3 && v >= 0 && v < 3) {
                        matriz[u][v] = !matriz[u][v];
                    }
                }
            }
        }
    }
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j];
        }
        cout << endl;
    }
 
    return 0;
}