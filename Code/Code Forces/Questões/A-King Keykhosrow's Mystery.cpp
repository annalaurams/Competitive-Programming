// A-King Keykhosrow's Mystery.cpp

#include <bits/stdc++.h>


using namespace std;

int lmc(int x, int y)
{
    return (x / gcd(x, y)) * y;
}

int main()
{

    int a, b, m, t;

    cin >> t;

    while (t--)
    {

        cin >> a >> b;

        for (int i = 0; i < (a * b); i++)
        {
            m = lmc(a, b);

            if ((m % a == 0) && (m % b == 0))
            {
                cout << m << endl;
                break;
            }
        }
    }

    return 0;
}