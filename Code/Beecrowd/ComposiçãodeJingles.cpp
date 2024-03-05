#include <iostream>
#include <map>


using namespace std;

int main() {

    map<char, double> mapa;
    string s, aux;
    int contador;
    double soma = 0;

    mapa.insert(pair<char, double>('W', 1));
    mapa.insert(pair<char, double>('H', (1.0 / 2)));
    mapa.insert(pair<char, double>('Q', (1.0 / 4)));
    mapa.insert(pair<char, double>('E', (1.0 / 8)));
    mapa.insert(pair<char, double>('S', (1.0 / 16)));
    mapa.insert(pair<char, double>('T', (1.0 / 32)));
    mapa.insert(pair<char, double>('X', (1.0 / 64)));


    while (cin >> s) {

        if (s == "*") break;

        for (int i = 1; i < s.size(); i++) {

            if (s[i] != '/') 
                aux += s[i];

            else {

                for (int j = 0; j < aux.size(); j++) {
                    for (auto itr = mapa.begin(); itr != mapa.end(); ++itr) {
                       
                        if (aux[j] == itr->first) {
                            soma += itr->second;
                            //break;
                        } else continue;
                    }
                }

                if (soma == 1) {

                    contador++;
                    soma = 0;
                }
                aux = "";
                soma = 0;
            }

        }
        
        aux = " ";
        cout << contador << endl;
        contador = 0;
    }

    return 0;
}