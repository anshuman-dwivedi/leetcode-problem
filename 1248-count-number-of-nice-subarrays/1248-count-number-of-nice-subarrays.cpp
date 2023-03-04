class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            {
            if(nums[i]&1)
                nums[i]=1;
            else
                nums[i]=0;
}
    int sum=0;
        int i=0,ans=0;
        while(i<nums.size())
        {
            sum+=nums[i];
            if(sum==k)
                ans++;
            if(m.find(sum-k)!=m.end())
            {
                ans+=m[sum-k];
}
                m[sum]++;
            i++;
}
        return ans;
    }
};