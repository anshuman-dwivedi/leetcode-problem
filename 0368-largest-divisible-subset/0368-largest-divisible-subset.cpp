class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>output(n,1);
        vector<int>hash(n);
        int maxi=1,lastind=0;
        sort(nums.begin(),nums.end());
for(int i=0;i<n;i++)
{
    hash[i]=i;
    for(int j=i-1;j>=0;j--)
    {
        if(nums[i]%nums[j]==0 && output[j]+1 > output[i])
        {
                output[i]=output[j]+1;
                hash[i]=j;
}
}if(maxi<output[i])
    {
    maxi=output[i];
    lastind=i;
}
}
        vector<int>temp;
        temp.push_back(nums[lastind]);
        while(hash[lastind]!=lastind)
        {
            lastind=hash[lastind];
            temp.push_back(nums[lastind]);
}
        reverse(temp.begin(),temp.end());
        return temp;
    }
};