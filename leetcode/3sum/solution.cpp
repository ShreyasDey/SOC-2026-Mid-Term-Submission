class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> a;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if (i>0 && nums[i] == nums[i-1]) continue;
            int k=i+1;int l=nums.size()-1;
            while(k<l){
            if(nums[k]+nums[l]<-1*nums[i]) k++;
            else if(nums[k]+nums[l]>-1*nums[i]) l--;
            else {
                vector<int> b={nums[i],nums[k],nums[l]};
                a.push_back(b);
                k++;l--;
                while (k < l && nums[k] == nums[k-1]) k++;
                while (k < l && nums[l] == nums[l+1]) l--;
            }
            }
        }
        a.erase(unique(a.begin(), a.end()),a.end());
        return a;
    }
};
