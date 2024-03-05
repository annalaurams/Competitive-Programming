#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {

    map<int, int>led;

    int n;
    string num;

    led[0] = 6;
    led[1] = 2;
    led[2] = 5;
    led[3] = 5;
    led[4] = 4;
    led[5] = 5;
    led[6] = 6;
    led[7] = 3;
    led[8] = 7;
    led[9] = 6;

    int x = 0;

    while (cin >> n) {

        while (n > 0) {

            cin >> num;
    
            for (char digito : num) {
                if (digito != '-') {

                    int aux = 0;
                    aux = stoi(string(1, digito));
                    x += led[aux];
                }
            }
            n--;
            cout << x << " leds" << endl;
            x = 0;
        }
    }
    return 0;
}
