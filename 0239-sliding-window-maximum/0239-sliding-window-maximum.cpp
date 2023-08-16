class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
  vector<int>result;
        deque<int>s;
       long long int i,n=nums.size();
        for(i=0;i<k;i++)
        {
            while((!s.empty()) && nums[i]>=nums[s.back()])
            {
            s.pop_back();
            }
            s.push_back(i);
        }
        for( ;i<n;i++)
        {
              result.push_back(nums[s.front()]);
           while((!s.empty()) && s.front()<=i-k)
           {
            s.pop_front();
           }
             while(!s.empty() && nums[i]>=nums[s.back()])
             {
            s.pop_back();
             }
    s.push_back(i);
        }
      result.push_back(nums[s.front()]);
       return result; 
        
    }
};