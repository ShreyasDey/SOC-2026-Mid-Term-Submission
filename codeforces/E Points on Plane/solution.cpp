#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << (long long)ceil(sqrtl(n)) - 1 << "\n";
    }
}
