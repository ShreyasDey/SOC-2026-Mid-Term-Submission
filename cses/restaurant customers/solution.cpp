#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arrivals(n), departures(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arrivals[i] >> departures[i];
    }
    sort(arrivals.begin(), arrivals.end());
    sort(departures.begin(), departures.end());
    int cur = 0, best = 0, i = 0, j = 0;
    while (i < n && j < n)
    {
        while (i < n && j < n && arrivals[i] < departures[j])
        {
            cur++;
            i++;
            best = max(cur, best);
        }
        cur--;
        j++;
    }
    cout << best;
}
