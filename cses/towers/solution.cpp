#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> k(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    vector<int> h;
    for (int i = 0; i < n; i++)
    {
        auto it = upper_bound(h.begin(), h.end(), k[i]);
        if (it == h.end())
            h.push_back(k[i]);
        else
            *it = k[i];
    }
    cout << h.size();
}
