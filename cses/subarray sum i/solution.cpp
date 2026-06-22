#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long s = 0;
    long long c = 0;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        s += a[r];
        while (s > x)
        {
            s -= a[l];
            l++;
        }
        if (s == x)
            c++;
    }
    cout << c;
}
