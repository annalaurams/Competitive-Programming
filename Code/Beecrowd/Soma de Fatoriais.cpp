#include <iostream>

using namespace std;

long long int fatorial(long long int a) {

    long long int aux = a;
    long long int fat = 1;

    if (a == 1 || a == 0) return 1;

    while (aux > 0) {

        fat *= aux;
        aux--;
    }

    return fat;
}

int main() {


    long long int x = 0, y = 0;

    long long int result = 0, soma = 0;

    while (cin >> x >> y) {
        if (x == 10 && y == 10) break;

        result = fatorial(x);

        soma += result;

        result = 0;
        result = fatorial(y);

        soma += result;

        cout << soma << endl;

        result = 0;
        soma = 0;
    }

    return 0;
}