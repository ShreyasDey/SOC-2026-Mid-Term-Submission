class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int first=0,last=nums.size();
        while(first<last){
            int mid=(first+last)/2;
            if(nums[mid]<target) first=mid+1;
            if(nums[mid]>target) last=mid;
            if(nums[mid]==target) return mid;
        }
        return last;
    }

};
