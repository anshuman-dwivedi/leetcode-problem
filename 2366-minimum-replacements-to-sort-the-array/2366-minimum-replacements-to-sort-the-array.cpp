class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size();
       long long prev=nums[n-1];
        long long res=0;
        for(int i=n-2;i>=0;i--)
        {
            long long curr=ceil(nums[i]/(double)prev);
            res+=curr-1;
            prev=nums[i]/curr;
}
        return res;
    }
};