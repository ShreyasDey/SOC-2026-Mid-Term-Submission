#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i].first;
            b[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i].first;
            c[i].second = i;
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        long long max_friends = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    int day_a = a[i].second;
                    int day_b = b[j].second;
                    int day_c = c[k].second;
                    if (a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second) {
                        long long current_sum = (long long)a[i].first + b[j].first + c[k].first;
                        max_friends = max(max_friends, current_sum);
                    }
                }
            }
        }
        cout << max_friends << "\n";
    }
}
