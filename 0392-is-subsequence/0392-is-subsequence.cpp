class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        if(s=="" && t=="")
        return true;
        if(t.length()>=s.length())
        {
        while(j<t.length())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else{
j++;
            }
            if(i==s.length())
            return true;
        }
        }
        return false;
    }
};