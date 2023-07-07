class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_map<char,int>mp;
    int l=0,h=0,ans=0,mf=0;
        while(h<s.length())
        {
            mp[s[h]]++;
            mf=max(mf,mp[s[h]]);
            if(h-l+1-mf<=k)
            {
                ans=max(ans,h-l+1);
}
            else
            {
                mp[s[l]]--;
                l++;
}
  h++;          
}
        return ans;
    }
};