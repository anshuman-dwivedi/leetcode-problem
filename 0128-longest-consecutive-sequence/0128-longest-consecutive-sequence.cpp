class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int>s;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
}
        for(int num:nums)
        {
            if(!s.count(num-1))//not found condition
            {
                int curr=num;
                int len=1;
                while(s.count(curr+1)!=0)
                {
                    curr+=1;
                    len++;
                    
}
    ans=max(ans,len);            
}
}
        return ans;
    }
};