#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = -1, r = -1;
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
        {
            l = i;
            break;
        }

    if (l == -1)
    {
        cout << "yes\n"
             << 1 << " " << 1;
        return 0;
    }

    for (int i = n - 2; i >= 0; i--)
        if (a[i] > a[i + 1])
        {
            r = i + 1;
            break;
        }

    bool two = true;
    for (int i = l; i < r; i++)
        if (a[i + 1] > a[i])
        {
            two = false;
            break;
        }

    bool one = (l == 0) || (a[l - 1] < a[r]);
    bool three = (r == n - 1) || (a[l] < a[r + 1]);

    if (two && one && three)
        cout << "yes\n"
             << (l + 1) << " " << (r + 1);
    else
        cout << "no";
}
