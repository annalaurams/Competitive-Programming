#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int id = 0;

double r(double x, double y) {

    double asw = pow((3 * x), 2) + pow(y, 2);

    return asw;

}
double b(double x, double y) {

    double asw = (2 * pow(x, 2)) + pow((5*y), 2);

    return asw;

}
double c(double x, double y) {

    double asw = (-100 * x) + pow(y, 3);

    return asw;
}

int main() {
    _;

    int n = 0;
    cin >> n;

    while (n--) {
        double x, y;
        cin >> x >> y;

        double maior = -1;
        double r2 = r(x, y);
        double b2 = b(x, y);
        double c2 = c(x, y);

        if(r2 > maior){
            maior = r2;
            id = 1;
        }
        if(b2 > maior){
            id = 2;
            maior = b2;
        }
        if(c2 > maior){
            maior = c2;
            id = 3;
        }

        if(id == 1) cout << "Rafael ganhou" << endl;
        else if(id == 2) cout << "Beto ganhou" << endl;
        else if(id == 3) cout << "Carlos ganhou" << endl;

    }

    return 0;
}
