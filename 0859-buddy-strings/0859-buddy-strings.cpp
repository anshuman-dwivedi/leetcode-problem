class Solution {
public:
    bool buddyStrings(string s, string s1) {
        if (s == s1)
            return (set<char>(s.begin(), s.end()).size() < s.size());
        int i=0,j=s.length()-1;
        while(i<s.length() && s[i]==s1[i])
   i++;
        while(j>=0 && s1[j]==s[j])
            j--;
        if(i<j)
            swap(s[i],s[j]);
        return s==s1;
    }
};