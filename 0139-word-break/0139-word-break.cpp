class Solution {
public:
    bool helper(int index,string s,unordered_set<string>st,vector<int>& dp)
    {
        if(index==s.size())
            return true;
        if(dp[index]!=-1)
            return dp[index];
        string temp;
        for(int j=index;j<s.size();j++)
        {
            temp+=s[j];
            if(st.find(temp)!=st.end())
            {
            if(helper(j+1,s,st,dp))
                return dp[index]=true;
}
}
        return dp[index]=false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
       unordered_set<string> st;
        vector<int>dp(s.size(),-1);
        for(auto it:wordDict)
            st.insert(it);
        return helper(0,s,st,dp);
    }
};