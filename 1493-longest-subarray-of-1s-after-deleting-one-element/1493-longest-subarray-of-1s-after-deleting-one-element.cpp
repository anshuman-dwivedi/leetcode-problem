class Solution {
public:
    int longestSubarray(vector<int>& s) {
  int prev=0;
          int l=0,ans=0,cnt=0,k=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==0)
                cnt++;
            while(cnt>k)
            {
                if(s[l]==0)
                    cnt--;
                l++;
}
            ans=max(i-l+1,ans);
}
        return ans-1;
    }
};