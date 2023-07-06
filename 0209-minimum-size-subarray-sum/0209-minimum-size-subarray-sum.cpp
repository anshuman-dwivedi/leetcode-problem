class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long int sum=0;
        int ans=INT_MAX;
       int r=0,l=0;
        while(r<nums.size())
        {
            sum+=nums[r++];
            while(sum>=target)
            {
              ans=min(ans,r-l);
                sum-=nums[l++];
            }
}
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};