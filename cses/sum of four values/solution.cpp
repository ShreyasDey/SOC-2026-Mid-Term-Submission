#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int lo = j + 1, hi = n - 1;
            while (lo < hi)
            {
                if (a[lo].first + a[hi].first < x - a[i].first - a[j].first)
                {
                    lo++;
                }
                else if (a[lo].first + a[hi].first > x - a[i].first - a[j].first)
                {
                    hi--;
                }
                else
                {
                    cout << a[i].second << " " << a[j].second << " " << a[lo].second << " " << a[hi].second << "\n";
                    return 0;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
}
