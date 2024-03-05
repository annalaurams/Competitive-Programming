 #include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int x = 0, y = 0, num = 0, i = 0, j = 0, answ = 0;
 
    for (int a = 1; a < 6; a++) { //linha
        for (int b = 1; b < 6; b++) { //coluna
 
            cin >> num;
 
            if (num == 1) {
                x = a;
                y = b;
                break;
            }
            num = 0;
        }
    }
 
    if (x > 3) i = x - 3;
    else i = 3 - x;
 
    if (y > 3) j = y - 3;
    else j = 3 - y;
 
    answ = i + j;
 
    cout << answ << endl;
 
    return 0;
}
