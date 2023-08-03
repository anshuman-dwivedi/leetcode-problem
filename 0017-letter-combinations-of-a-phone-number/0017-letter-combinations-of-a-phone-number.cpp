class Solution {
public:
void helper(string digits,int N,int index,vector<string>& result,string output,string mapping[])
{
   
    if(index==N)
    {
        result.push_back(output);
return;
    }
    int ch=digits[index]-'0';
    string val=mapping[ch];
    for(int i=0;i<val.length();i++)
    {
        helper(digits,N,index+1,result,output+val[i],mapping);
      
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string>result;
        if(digits.length()==0)
        {
            return result;
        }
        string output="";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        helper(digits,digits.length(),0,result,output,mapping);
        return result;
    }
};