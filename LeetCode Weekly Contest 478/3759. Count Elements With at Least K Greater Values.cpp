class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int num=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            auto temp=upper_bound(nums.begin(),nums.end(),nums[i]);
            int great=n-(temp-nums.begin());

            if(great >= k) count++;
        }

        return count;
    }
};