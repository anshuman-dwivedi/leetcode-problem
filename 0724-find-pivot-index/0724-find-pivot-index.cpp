class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int n=nums.size();
        int ans=-1,sum=0,lf=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
}
        for(int i=0;i<n;i++)
        {
            sum-=nums[i];
            if(sum==lf)
            {
                ans=i;
                break;
}
            lf+=nums[i];
}
        return ans;
    }
};