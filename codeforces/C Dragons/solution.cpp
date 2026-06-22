#include <bits/stdc++.h>
using namespace std;
int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int,int>> d(n);
    for (auto &p : d) cin >> p.first >> p.second;
    sort(d.begin(), d.end());
    for (auto &p : d) {
        if (s > p.first) s += p.second;
        else { cout << "NO"; return 0; }
    }
    cout << "YES";
}
