class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> out;
        perm(nums, 0, out);
        return out;
    }
private:
    void perm(vector<int>& a, int n, vector<vector<int>>& out) {
    if (n == a.size()) {
        out.push_back(a);
        return;
    }
    unordered_set<int> seen;
    for (int i = n; i < a.size(); i++) {
        if (seen.count(a[i])) continue;
        seen.insert(a[i]);
        swap(a[i], a[n]);
        perm(a, n + 1, out);
        swap(a[n], a[i]);
    }
}
};
