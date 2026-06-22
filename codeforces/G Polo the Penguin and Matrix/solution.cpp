#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(n * m);
    for (int i = 0; i < n * m; i++) {
        cin >> a[i];
    }
    int r = a[0] % d;
    for (int i = 1; i < n * m; i++) {
        if (a[i] % d != r) {
            cout << -1 << endl;
            return 0;
        }
    }
    sort(a.begin(), a.end());
    int median = a[(n * m) / 2];
    long long moves = 0;
    for (int i = 0; i < n * m; i++) {
        moves += abs(a[i] - median) / d;
    }
    cout << moves << endl;
    return 0;
}
