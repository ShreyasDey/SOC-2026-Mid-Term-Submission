class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=0,last=nums.size();
        int right=-1;
        while(first<last){
            int mid=(first+last)/2;
            if(nums[mid]<target) first=mid+1;
            else if(nums[mid]>target) last=mid;
            else{
                right=mid;
                first=mid+1;
                last=nums.size();
            }
        }

        first=0;last=nums.size();
        int left=-1;
        while(first<last){
            int mid=(first+last)/2;
            if(nums[mid]<target) first=mid+1;
            else if(nums[mid]>target) last=mid;
            else{
                left=mid;
                first=0;
                last=mid;
            }
        }
        vector<int> a={left,right};
        return a;
    }
};
