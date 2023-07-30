class Solution {
public:
    void helper(int ind,string s,vector<string>&res)
    {
        if(ind==s.length())
        {
            res.push_back(s);
            return ;
}
      helper(ind+1,s,res);
        if(isalpha(s[ind]))
        {
            s[ind]^=(1<<5);
            helper(ind+1,s,res);
}
         }
    vector<string> letterCasePermutation(string s) {
        vector<string>res;
        helper(0,s,res);
        return res;
    }
};