class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int j=0,count=0,ans=0;
        while(i<s.length())
        {
            if(s[i]=='a' || s[i]=='e' ||  s[i]=='o' ||  s[i]=='u' ||  s[i]=='i')
            {
            count++;
            }
                if(i-j==k)
                {
                    if(s[j]=='a' || s[j]=='e' ||  s[j]=='o' ||  s[j]=='u' ||  s[j]=='i')
                      count-=1;  
                    j++;
            }
             ans=max(ans,count);
                i++;
            
}
        return ans;
    }
};