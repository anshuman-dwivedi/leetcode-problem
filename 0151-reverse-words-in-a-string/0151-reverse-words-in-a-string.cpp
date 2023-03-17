class Solution {
public:
    string reverseWords(string s) {
        int i=0;
int n=s.length();
string wd;
while(i<n)
{
    while(i<n && s[i]==' ')
    {
        i++;
    }
    if(i>=n)
    break;
    int j=i+1;
    while(j<n && s[j]!=' ')
    {
    j++;
    }
    string result=s.substr(i,j-i);
    if(wd.length()==0)
    wd=result;
    else
    wd=result+" "+wd;
    i=j+1;
}
return wd;
    }
};