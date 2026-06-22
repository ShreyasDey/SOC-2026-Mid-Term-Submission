#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        long long total_sum = 0;
        vector<int> reductions;

        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0';
            total_sum += digit;

            if (i == 0) {
                reductions.push_back(digit-1);
            } else {
                reductions.push_back(digit);
            }
        }
        if (total_sum <= 9) {
            cout << 0 << "\n";
        }
        else{
            long long target_reduction = total_sum - 9;
            sort(reductions.rbegin(), reductions.rend());
            long long current_reduction = 0;
            int moves = 0;
            for (int r : reductions) {
                if (current_reduction >= target_reduction) {
                    break;
                }
                current_reduction += r;
                moves++;
            }
            cout << moves << "\n";
        }
    }
}
