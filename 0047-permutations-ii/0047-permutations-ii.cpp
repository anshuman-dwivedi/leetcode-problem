class Solution {
public:
      void helper(vector<int>arr,vector<vector<int>> & dp,int index)
  {
      if(index==arr.size())
      {
          dp.push_back(arr);
          return;
      }
      for(int i=index;i<arr.size();i++)
      {
          if(i!=index && arr[i]==arr[i-1])
          continue;
          swap(arr[index],arr[i]);
          helper(arr,dp,index+1);
          swap(arr[index],arr[i]);
      }
  } 
    vector<vector<int>> permuteUnique(vector<int>& arr) {
      vector<vector<int>> dp;
      sort(arr.begin(),arr.end());
      int index=0;
      helper(arr,dp,index);
     set<vector<int>>s;
     for(auto it:dp)
     {
         s.insert(it);
     }
     dp.clear();
     for(auto it:s)
     {
         dp.push_back(it);
     }
      return dp;  
    }
};