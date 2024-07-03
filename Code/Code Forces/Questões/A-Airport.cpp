#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef long long ll;

int n, m, maximo = 0, minimo = 0;
vector<int> vec;

void calcular_maior() {

    priority_queue<int> max_heap(vec.begin(), vec.end());

    for (int i = 0; i < n; i++) {

        int max_ = max_heap.top();
        max_heap.pop();
        maximo += max_;

        if (max_ - 1 > 0) 
            max_heap.push(max_ - 1);
        
    }
}

void calcular_menor() {
  
    priority_queue<int, vector<int>, greater<int>> min_heap(vec.begin(), vec.end());

    for (int i = 0; i < n; i++) {

        int min_ = min_heap.top();

        min_heap.pop();
        minimo += min_;
        
        if (min_ - 1 > 0) 
            min_heap.push(min_ - 1);
        
    }
}

int main() {
    _;

    cin >> n >> m;
    vec.resize(m);

    for (int i = 0; i < m; i++) {
        cin >> vec[i];
    }

    calcular_maior();
    calcular_menor();

    cout << maximo << " " << minimo << endl;

    return 0;
}
