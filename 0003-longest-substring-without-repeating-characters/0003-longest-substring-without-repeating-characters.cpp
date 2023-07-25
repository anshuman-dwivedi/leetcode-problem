class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int t=s.length();
unordered_map<char,int>mp;
        int i=0,j=0;
        int maxi=0;
        while(i<t)
        {
            if(mp.find(s[i])!=mp.end()){
                j=max(j,mp[s[i]]+1);
             mp[s[i]]=i;
              
}
            mp.insert({s[i],i});
             maxi=max(maxi,i-j+1);
            i++;
}
        return maxi;
    }
};