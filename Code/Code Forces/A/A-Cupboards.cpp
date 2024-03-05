 #include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n = 0, l = 0, r = 0, asw = 0, esq = 0, dir = 0, result = 0, N = 0;
 
    cin >> N;
    n = N;
 
    while(N--){
 
        cin >> l >> r;
 
        esq += l;
        dir += r;
    }
 
   result  = min(esq, n - esq) + min(dir, n - dir);
 
    cout << result << endl;
 
}
 