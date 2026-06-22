#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
        long long t2 = (n + (x + y) - 1) / (x + y);
        long long t1 = ((n + x - 1) / x <= z) ? (n + x - 1) / x : (n + 10 * y * z + (x + 10 * y) - 1) / (x + 10 * y);
        cout << min(t1, t2) << "\n";
    }
}
