#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        long long l, r; cin >> l >> r;
        long long d = r - l;
        long long n = (long long)((1 + sqrtl(1 + 8.0L * d)) / 2);
        cout << n << "\n";
    }
}
