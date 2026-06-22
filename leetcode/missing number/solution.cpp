class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum = 0;
        for(int num : nums)
        {
            totalSum += num;
        }
        return (nums.size()*(nums.size()+1)/2)-totalSum;
    }
};
