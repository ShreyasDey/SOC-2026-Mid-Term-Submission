#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long a = 1, b = 10000;
        bool found = false;
        while (a <= b)
        {
            if (a * a * a + b * b * b == x)
            {
                found = true;
                break;
            }
            else if (a * a * a + b * b * b < x)
                a++;
            else
                b--;
        }

        cout << (found ? "YES" : "NO") << "\n";
    }
}
