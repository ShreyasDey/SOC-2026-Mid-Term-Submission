#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> endi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> start[i] >> endi[i];
    }
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](int a, int b)
         { return endi[a] < endi[b]; });
    int count = 0;
    int last_end = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int j = idx[i];
        if (start[j] >= last_end)
        {
            count++;
            last_end = endi[j];
        }
    }
    cout << count << endl;
}
