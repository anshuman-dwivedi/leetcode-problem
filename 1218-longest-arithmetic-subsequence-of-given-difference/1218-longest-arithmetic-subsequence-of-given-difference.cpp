class Solution {
public:
    int longestSubsequence(vector<int>&arr, int difference) {
         int n=arr.size();
              unordered_map<int,int>dp;
        int maxi=1;
        for(int i=0;i<n;i++)
        {
   if(dp.find(arr[i]-difference)!=dp.end())
       dp[arr[i]]=1+dp[arr[i]-difference];
            else
                dp[arr[i]]=1;
            maxi=max(maxi,dp[arr[i]]);
}
 return maxi;  
    }
};