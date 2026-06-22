#include <bits/stdc++.h>
using namespace std;
int n;
vector<long long> p;
long long best = LLONG_MAX;
void solve(int i, long long diff)
{
    if (i == n)
    {
        best = min(best, llabs(diff));
        return;
    }
    solve(i + 1, diff + p[i]);
    solve(i + 1, diff - p[i]);
}
int main()
{
    cin >> n;
    p.resize(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    solve(0, 0);
    cout << best << "\n";
    return 0;
}
