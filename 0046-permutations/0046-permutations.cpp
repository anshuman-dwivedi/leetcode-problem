class Solution {
public:
vector<vector<int>>answer;
	void helper(vector<int> &a,int l)
	{
	    if(l==a.size())
	    {
	        answer.push_back(a);
	        return;
	    }
	    for(int i=l;i<a.size();i++)
	    {
	        swap(a[i],a[l]);
	        helper(a,l+1);
	        swap(a[i],a[l]);
	    }
	   
	}
    vector<vector<int>> permute(vector<int>& nums) {
		   helper(nums,0);
		   return answer;
        
    }
};