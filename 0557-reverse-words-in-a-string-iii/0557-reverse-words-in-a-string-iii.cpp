class Solution {
public:
    string reverseWords(string s) {
        string wd;
        string ans;
        s+=' ';
       for(int i=0;i<s.length();i++)
       {
           if(s[i]==' ')
           {
             ans+=' '+wd;
               wd="";
           }
           else
               wd=s[i]+wd;
       }
        ans.erase(ans.begin()+0);
        return ans;
    }
};