#include <bits/stdc++.h>
using namespace std;
long long solve(long long a, long long b, long long x)
{
    if (a == b)
        return 0;
    if (x == 1)
        return abs(a - b);
    if (a > b)
        swap(a, b);
    return min(b - a, 1 + solve(a, b / x, x));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x;
        cin >> a >> b >> x;
        cout << solve(a, b, x) << '\n';
    }
}
