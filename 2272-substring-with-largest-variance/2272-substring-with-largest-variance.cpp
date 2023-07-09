class Solution {
public:
    int largestVariance(string s) {
     vector<int>freq(26);
        for(auto it:s)
        {freq[it-'a']++;
}
        int ans=0;
        for(char ch1='a';ch1<='z';ch1++)
        {
            for(char ch2='a';ch2<='z';ch2++)
            {
                if(ch1==ch2 or !freq[ch1-'a'] or !freq[ch2-'a'] )
                    continue;
                for(int j=1;j<=2;j++)
                {
                    int c1=0,c2=0;
                    for(auto ch:s)
                    {
                        c1+=(ch==ch1);
                        c2+=(ch==ch2);
                        if(c1<c2)
                            c1=c2=0;
                        if(c1>0 and c2>0)
                            ans=max(ans,c1-c2);
}
                     reverse(s.begin(),s.end());
}
               
}
            
}
 return ans;       
    }
};