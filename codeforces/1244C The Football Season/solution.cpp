#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, p, w, d;
    if (!(cin >> n >> p >> w >> d)) return 0;
    for (long long y = 0; y < w; ++y) {
        long long rem_points = p - y * d;
        if (rem_points >= 0 && rem_points % w == 0) {
            long long x = rem_points / w;
            if (x + y <= n) {
                long long z = n - (x + y);
                cout << x << " " << y << " " << z << "\n";
                return 0;
            }
        }
    }
    cout << -1 << "\n";
    return 0;
}
