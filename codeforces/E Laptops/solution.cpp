#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1].second < a[i].second)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}
