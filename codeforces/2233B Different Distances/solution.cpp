#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> ans;
        if (n == 3) {
            ans = {1,1,2,1,2,3,1,3,2,2,3,3};
        }
        else if (n % 2 == 0) {
            for (int i = 1; i <= n; i++) ans.push_back(i);
            for (int i = n; i >= 1; i--) ans.push_back(i);
            for (int i = n; i >= 1; i--) ans.push_back(i);
            for (int i = 1; i <= n; i++) ans.push_back(i);
        }
        else {
            int m = n - 1;
            for (int i = 1; i <= m; i++) ans.push_back(i);
            ans.push_back(n);
            ans.push_back(n);
            for (int i = m; i >= 1; i--) ans.push_back(i);
            for (int i = m; i >= 1; i--) ans.push_back(i);
            ans.push_back(n);
            ans.push_back(1);
            ans.push_back(n);
            for (int i = 2; i <= m; i++) ans.push_back(i);
        }
        for (int i = 0; i < (int)ans.size(); i++) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }
}
