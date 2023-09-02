class Solution {
public:
    int helper(int idx,int n,string& s,unordered_map<string,int>& mp,vector<int>&dp)
    {
        if(idx>=n)
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        string curr="";
        int ans=s.size();
    for(int i=idx;i<n;i++){
        curr.push_back(s[i]);
        int count=((mp.count(curr))?0:curr.size())+helper(i+1,n,s,mp,dp);
        ans=min(ans,count);
}
        return dp[idx]=ans;
}
    int minExtraChar(string s, vector<string>& dictionary) {
       unordered_map<string,int>mp;
        int n=s.length();
        vector<int>dp(n,-1);
        for(auto it: dictionary)
        {
            mp[it]++;
}
        return helper(0,n,s,mp,dp);
    }
};