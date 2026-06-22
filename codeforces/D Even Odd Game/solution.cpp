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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        long long alice_score = 0;
        long long bob_score = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (a[i] % 2 == 0) {
                    alice_score += a[i];
                }
            } else {
                if (a[i] % 2 != 0) {
                    bob_score += a[i];
                }
            }
        }
        if (alice_score > bob_score) {
            cout << "Alice\n";
        } else if (bob_score > alice_score) {
            cout << "Bob\n";
        } else {
            cout << "Tie\n";
        }
    }
}
