#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        bool possible = true;
        for (int r = 0; r < k; r++) {
            int ones = 0;
            for (int i = r; i < n; i += k) {
                if (s[i] == '1') ones++;
            }
            if (ones % 2 != 0) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << "\n";
    }
}
