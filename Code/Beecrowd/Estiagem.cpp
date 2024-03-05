#include <bits/stdc++.h>

using namespace std;

struct Item {
    double auxX;

    vector< pair <double, double> > vect;

};

int main() {

    map<int, Item> idk;

    int med = 0, caso, city = 0;
    double aux = 0;
    double X = 0, Y = 0;
    double a = 0, u = 0;

    while (cin >> caso) {

        if (caso == 0) break;

        city++;

        while (caso > 0) {

            cin >> X >> Y;

            Item it;

            med = Y / X;

            auto ite = idk.find(med);

            if (ite != idk.end()) {

                idk[med].auxX += X;
                idk[med].vect.push_back(make_pair(X, Y));

            } else {
                idk[med].auxX = X;
                idk[med].vect.push_back(make_pair(X, Y));
            }

            X = Y = med = 0;
            caso--;
        }

        cout << "Cidade# " << city << ":" << endl;

        for (const auto &pair : idk) {
            int key = pair.first;
            const Item &item = pair.second;

            cout << fixed << setprecision(0) << floor(item.auxX) << "-";
            cout << fixed << setprecision(0) << floor(key) << " ";

            for (const auto &element : item.vect) {
                double x = element.first;
                double y = element.second;
                a += x;
                u += y;
            }
        }

        aux = u / a;


        int casas_decimais = 2; // Número de casas decimais desejadas

        double fator_escala = pow(10, casas_decimais);

        double numero_truncado = floor(aux * fator_escala) / fator_escala;

        cout << "\nConsumo medio: ";
        cout << fixed << setprecision(2) << numero_truncado << " m3.";

        cout << endl << endl;

        a = u = aux = 0;
        idk.clear();
    }
    return 0;
}

