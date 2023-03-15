class Solution {
public:
     void helper(vector<int>& A,vector<int>subset,vector<vector<int>>& dp,int sum,int indx,int n)
    {
      if(sum==0)
            {
             dp.push_back(subset); 
               return;
            }
         
       for(int i=indx;i<A.size();i++)
       {
           if(i>indx && A[i]==A[i-1])
               continue;
           if(A[i]>sum)
               break;
      
        subset.push_back(A[i]);
        helper(A,subset,dp,sum-A[i],i+1,n);
        subset.pop_back();
    }
     }
    vector<vector<int>> combinationSum2(vector<int>& candi, int target) {
         sort(candi.begin(),candi.end());
vector<int>subset;
     vector<vector<int>>dp;
     int n=candi.size();
     helper(candi,subset,dp,target,0,n);
     return dp;  
    }
};