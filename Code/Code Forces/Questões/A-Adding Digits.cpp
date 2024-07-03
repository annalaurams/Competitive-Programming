#include <iostream>

using namespace std;

int main() {
    long long int a, b, n;
    cin >> a >> b >> n;

    int controle = 0, res = 0;
    string s = to_string(a);

    for (int i = 0; i < 10; i++) {

        int aux = i;

        s += to_string(aux);

        res = stoll(s);

            if (res % b == 0) {
                controle = 1;
                break;
            }
    }

    // Se não encontramos nenhum número que satisfaz a condição
    if (controle == 0) {
        cout << -1 << endl;
    }
    else cout << res << endl;

    return 0;
}
