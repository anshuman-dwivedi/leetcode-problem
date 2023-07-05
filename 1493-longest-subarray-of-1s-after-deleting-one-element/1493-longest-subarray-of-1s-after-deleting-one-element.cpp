class Solution {
public:
    int longestSubarray(vector<int>& nums) {
  int prev=0;
        int ans=0;
        int next=(nums[0]==1?1:0);
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==0)
            {
                prev=next;
                next=0;
}
            else{
                prev=max(prev+1,next);
                next++;
}
            ans=max(ans,prev);
}
        return ans;
        
    }
};