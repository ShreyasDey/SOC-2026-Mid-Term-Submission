#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int j = 0; j < n; j++) cin >> a[j];
        int p = a[0];
        for (int k = 1; k < n; k++)
            p = max(p, a[k] - a[k-1]);
        p = max(p, 2 * (x - a[n-1]));
        cout << p << "\n";
    }
}
