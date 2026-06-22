#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    unordered_map<int, int> last;
    last.reserve(1 << 18);
    last.max_load_factor(0.25);
    int l = 0, ans = 0;
    for (int r = 0; r < n; r++)
    {
        if (last.count(a[r]) && last[a[r]] >= l)
            l = last[a[r]] + 1;
        last[a[r]] = r;
        ans = max(ans, r - l + 1);
    }
    cout << ans << "\n";
}
