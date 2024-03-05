#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int c = 0;
    cin >> c;

    while (c > 0) {

        int qtd = 0, x = 0, total = 0;
        cin >> qtd;

        vector<int> alunos;

        while (qtd > 0) {

            int nota = 0;
            cin >> nota;
            
            alunos.push_back(nota);
            x += nota;
            qtd--;
        }

        double media = static_cast<double>(x) / alunos.size();

        for (int i = 0; i < alunos.size(); i++) {
            if (alunos[i] > media)
                total++;
        }

        double porcentagem = (total * 100.0) / alunos.size();

        cout << fixed << setprecision(3) << porcentagem << "%" << endl;

        c--;
    }
    
    return 0;
}
