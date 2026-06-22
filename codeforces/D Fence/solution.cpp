#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];

    long long sum = 0;
    for (int i = 0; i < k; i++)
        sum += h[i];
    long long best = sum;
    int bestIdx = 0;
    for (int i = k; i < n; i++)
    {
        sum += h[i] - h[i - k];
        if (sum < best)
        {
            best = sum;
            bestIdx = i - k + 1;
        }
    }
    cout << bestIdx + 1;
}
