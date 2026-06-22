#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, t;
    cin >> n >> t;
    vector<long long> k(n);
    for (int i = 0; i < n; i++)
        cin >> k[i];
    long long lo = 1, hi = *min_element(k.begin(), k.end()) * t;
    while (lo < hi)
    {
        long long mid = lo + (hi - lo) / 2;
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            total += mid / k[i];
            if (total >= t)
                break;
        }
        if (total >= t)
            hi = mid;
        else
            lo = mid + 1;
    }
    cout << lo << "\n";
    return 0;
}
