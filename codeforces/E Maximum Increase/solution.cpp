#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int prev, cur;
    cin >> prev;
    int best = 1, run = 1;
    for (int i = 1; i < n; ++i) {
        cin >> cur;
        if (cur > prev) run++;
        else run = 1;
        best = max(best, run);
        prev = cur;
    }

    cout << best;
}
