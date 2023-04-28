class Solution {
public:
    vector<vector<int>>ans;
    void helper(int index,vector<int> vec,int k,int n)
    {
        if(vec.size()==k)
        {
            ans.push_back(vec);
            return ;
}
        for(int i=index;i<n+1;i++)
        {
            vec.push_back(i);
            helper(i+1,vec,k,n);
            vec.pop_back();
}
}
    vector<vector<int>> combine(int n, int k) {
     vector<int> res;
       helper(1,res,k,n);
        return ans;
    }
};