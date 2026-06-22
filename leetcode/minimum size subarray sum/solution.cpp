class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, l = 0, out = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            while (sum >= target) {
                out = min(out, i - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        return out == INT_MAX ? 0 : out;
    }
};
