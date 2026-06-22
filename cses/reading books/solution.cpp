#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> t(n);
    long long total = 0, maxBook = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        total += t[i];
        maxBook = max(maxBook, t[i]);
    }
    cout << max(total, 2 * maxBook);
}
