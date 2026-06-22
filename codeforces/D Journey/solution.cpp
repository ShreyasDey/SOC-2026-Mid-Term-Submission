#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        long long S = a + b + c;
        long long r = n % S;
        if (r == 0)
            cout << 3 * n / (a + b + c) << "\n";
        else if (r <= a)
            cout << 3 * (n / (a + b + c)) + 1 << "\n";
        else if (r <= a + b)
            cout << 3 * (n / (a + b + c)) + 2 << "\n";
        else
            cout << 3 * (n / S) + 3 << "\n";
    }
}
