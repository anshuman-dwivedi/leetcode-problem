class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int l=0,ans=0,cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='F')
                cnt++;
            while(cnt>k)
            {
                if(s[l]=='F')
                    cnt--;
                l++;
}
            ans=max(i-l+1,ans);
}
        cnt=0,l=0;
            for(int i=0;i<s.length();i++)
        {
            if(s[i]=='T')
                cnt++;
            while(cnt>k)
            {
                if(s[l]=='T')
                    cnt--;
                l++;
}
            ans=max(i-l+1,ans);
}
        return ans;
    }
};