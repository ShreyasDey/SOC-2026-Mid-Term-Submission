#include <bits/stdc++.h>
using namespace std;

int solve(vector<char>& a, int n, int k, char bad) {
    int ca = 0, cb = 0, ma = 0;
    int left = 0;
    for (int right = 0; right < n; right++) {
        if (a[right] == 'a') ca++;
        if (a[right] == 'b') cb++;
        while ((bad == 'b' && cb > k) || (bad == 'a' && ca > k)) {
            if (a[left] == 'a') ca--;
            if (a[left] == 'b') cb--;
            left++;
        }
        ma = max(ma, right - left + 1);
    }
    return ma;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<char> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << max(solve(a, n, k, 'b'), solve(a, n, k, 'a'));
}
