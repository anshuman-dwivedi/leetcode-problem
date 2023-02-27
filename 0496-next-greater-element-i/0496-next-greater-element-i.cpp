class Solution {
public:
 unordered_map<int,int>result;
    void helper(vector<int>&arr)
    {
        stack<int>s;
        for(long long  i=0;i<arr.size();i++)
        {
          while(!s.empty() && arr[i]>arr[s.top()])
          {
            result.insert({arr[s.top()],arr[i]});
            s.pop();
              
          }
          s.push(i);
        }
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        helper(nums2);
        vector<int>ans(nums1.size(),-1);
  for(int i=0;i<nums1.size();i++)
  {
      ans[i]=result[nums1[i]]==0?-1:result[nums1[i]];
}
        return ans;
     }  
};