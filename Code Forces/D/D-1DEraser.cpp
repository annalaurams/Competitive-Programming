#include <iostream>
#include <string>
using namespace std;
 
int contagem(int n, int k, string word) {
    int cont = 0;
    int i = 0;
 
    while (i < n) {
        if (word[i] == 'B') {
            i += k; 
            cont++;
        } else {
            i++;
        }
    }
 
    return cont;
}
 
int main() {

    int t = 0;
    cin >> t;

    while (t--) {
        
        int n = 0, k = 0;
        string word;

        cin >> n >> k >> word;

        int result = contagem(n, k, word);
        cout << result << endl;
    }

    return 0;
}