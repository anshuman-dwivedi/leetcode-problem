class Solution {
public:
    string convertToTitle(int c) {
        string ans="";
        while(c>0)
        {
            c--;
            int rem=c%26;
            cout<<rem;
            c=c/26;
            ans+='A'+rem;
}
    reverse(ans.begin(),ans.end());
        return ans;
    }
};