#include <bits/stdc++.h>
using namespace std;
bool is_good_array(vector<int> b) {
    if (b.empty()) return true;
    sort(b.begin(), b.end());
    for (size_t i = 1; i < b.size(); ++i) {
        if (b[i] - b[i - 1] != 1) {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        for (int k = n / 2; k >= 1; k--) {
            int m = n - k + 1;
            vector<int> freq(n + 2, 0);
            int distinct = 0;
            deque<int> maxDQ, minDQ;
            vector<char> goodSeg(m, 0);
            vector<int> minValArr(m, -1);
            vector<int> minPos(n + 2, -1), maxPos(n + 2, -1);
            for (int i = 0; i < n; i++) {
                if (freq[a[i]] == 0) distinct++;
                freq[a[i]]++;
                while (!maxDQ.empty() && a[maxDQ.back()] <= a[i]) maxDQ.pop_back();
                maxDQ.push_back(i);
                while (!minDQ.empty() && a[minDQ.back()] >= a[i]) minDQ.pop_back();
                minDQ.push_back(i);
                if (i >= k) {
                    int outIdx = i - k;
                    int outVal = a[outIdx];
                    freq[outVal]--;
                    if (freq[outVal] == 0) distinct--;
                    if (maxDQ.front() == outIdx) maxDQ.pop_front();
                    if (minDQ.front() == outIdx) minDQ.pop_front();
                }
                if (i >= k - 1) {
                    int l = i - k + 1;
                    if (distinct == k) {
                        int mx = a[maxDQ.front()];
                        int mn = a[minDQ.front()];
                        if (mx - mn == k - 1) {
                            goodSeg[l] = 1;
                            minValArr[l] = mn;
                            if (minPos[mn] == -1) minPos[mn] = l;
                            maxPos[mn] = l;
                        }
                    }
                }
            }

            bool found = false;
            for (int l = 0; l < m && !found; l++) {
                if (!goodSeg[l]) continue;
                int v = minValArr[l];
                int target = v + k;
                if (target <= n && maxPos[target] != -1) {
                    if (abs(maxPos[target] - l) >= k || abs(minPos[target] - l) >= k) {
                        found = true;
                    }
                }
                if (!found) {
                    int target2 = v - k;
                    if (target2 >= 1 && maxPos[target2] != -1) {
                        if (abs(maxPos[target2] - l) >= k || abs(minPos[target2] - l) >= k) {
                            found = true;
                        }
                    }
                }
            }
            if (found) {
                ans = k;
                break;
            }
        }

        cout << ans << "\n";
    }
}
