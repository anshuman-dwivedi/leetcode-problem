class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
  int i=0,j=0;
        string wd="";
        while(i<n){
            while(i<n && s[i]==' ')
                i++;
            string res;
            if(i>=n)
                break;
            j=i+1;
            while(j<n && s[j]!=' '){
                j++;
            }
            res=s.substr(i,j-i);
            if(wd=="")
                wd=res;
            else
                wd=res+" "+wd;
            i=j+1;
}
        return wd;
        }
};