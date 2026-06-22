#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    long long curr = p[0];
    long long overall = p[0];
    for (int i = 1; i < n; i++)
    {
        curr = max(curr + p[i], p[i]);
        overall = max(overall, curr);
    }
    cout << overall;
}
