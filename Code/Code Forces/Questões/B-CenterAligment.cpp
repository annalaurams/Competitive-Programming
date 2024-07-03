#include <bits/stdc++.h>

using namespace std;

void text(vector<pair<string, int>> &word, int maior) {

    for (int i = 0; i < (maior + 2); i++) {
        cout << "*";
    }

    cout << endl;

    for (const auto &line : word) {

        int asw = (line.second - maior);

        if (maior == line.second) asw = 6;
        else if (line.first.empty()) asw = 5;
        else if (asw % 2 == 0) {
            asw = 4;
        } else asw = 3;

        //  cout << "\nAsw: " << asw << endl;

        switch (asw) {

        case 0:
            cout << "*" << line.first << "*" << endl;
            break;

        case 1:

            cout << "*";

            for (int i = 0; i < (asw / 2); i++) {

                cout << " ";
            }

            cout << line.first;

            cout << "*" << endl;
            break;

        case 2:

            cout << "* " << line.first << " *" << endl;
            break;

        case 3:

            cout << "*";

            for (int i = 0; i < (asw / 2); i++) {

                cout << " ";
            }

            cout << line.first;

            for (int i = 0; i < ((asw / 2) + 1); i++) {

                cout << " ";
            }
            cout << "*" << endl;
            break;


        case 4:

            cout << "*";

            for (int i = 0; i < (asw / 2) + 1 ; i++) {

                cout << " ";
            }

            cout << line.first;

            for (int i = 0; i < (asw / 2) +1 ; i++) {

                cout << " ";
            }
            cout << "*" << endl;
            break;

        case 5:

            cout << "*";

            for (int i = 0; i < (maior); i++) {
                cout << " ";
            }
            cout << "*";

            cout << endl;

            break;

        case 6:

            cout << "*" << line.first << "*" << endl;
            break;
        }

    }

    for (int i = 0; i <= maior; i++) {
        cout << "*";
    }

    cout << endl;

}

int main() {
    vector<pair<string, int>> word;

    string str;
    int qtdLinhas = 0, maior = 0;

    while (getline(cin, str)) {

        qtdLinhas++;

        int tam = str.length();

        word.push_back({ str, tam });

        maior = max(maior, tam);
    }

    text(word, maior);

    return 0;
}
