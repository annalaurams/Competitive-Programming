#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {

    int n;

    cin >> n;
    vector<int>p(n);

    for (int i = 0;i < n;i++) cin >> p[i];

    sort(p.rbegin(), p.rend());

    int result = 0;

    for (int i = 0;i < n;i++) {
        if (p[i] + (i + 1) > result) result = p[i] + (i + 1);
    }

    cout << result + 1 << endl;

    return 0;
}