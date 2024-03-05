#include <iostream>
 
using namespace std;
 
int main() {

    int n, x = 0;
 
    while(cin >> n){
        
        if( n % 2 == 0) x++;
    }
    cout << x << " valores pares\n";
    x = 0;
 
    return 0;
}