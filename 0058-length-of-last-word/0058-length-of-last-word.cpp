class Solution {
public:
    int lengthOfLastWord(string s) {
      int l=s.length(); 
       reverse(s.begin(),s.end());
    int i=-1,count=0;
        while(++i<l && s[i]==' ');
       while(s[i]!=' ' && i<l)
       {
           count++;
        i++;
       }
      return count;  
    }
};