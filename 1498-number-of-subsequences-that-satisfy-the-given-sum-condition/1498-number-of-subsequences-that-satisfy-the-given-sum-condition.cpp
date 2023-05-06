class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
      int mod=1e9+7;
        sort(nums.begin(),nums.end());
        vector<int>pre(nums.size()+1,1);
        int sum=0;
        for(int i=1;i<=nums.size();i++)
        {
            pre[i]=(pre[i-1]<<1)%mod;
}
        int low=0;
            int high=nums.size()-1;
        while(low<=high)
        {
            if(nums[low]+nums[high]<=target)
            {
                sum=(sum+pre[high-low])%mod;
                low++;
}
            else
                high--;
}
        return sum;
    }
};