class Solution {
public:
bool helper(vector<int>& arr,int N,int target, vector<vector<bool>> & dp)
{
       vector<int>prev(target+1);
       vector<int>curr(target+1);
  prev[0]=true;
    if(arr[0] <=target)
      prev[arr[0]]=true;
    for(int i=1;i<N;i++)
    {
        for(int j=1;j<=target;j++)
        {
             bool nottake=prev[j];
            bool take=false;
            if(arr[i]<=j)
                take=prev[j-arr[i]];
  curr[j]=take||nottake;
}
prev=curr;
}
    return prev[target];
}
    bool canPartition(vector<int>& nums) {
         int sum=0;
         int N=nums.size();
       for(int i=0;i<N;i++)
       {
         sum+=nums[i];  
       }
       if(sum%2)
       return 0;
       int target=sum/2;
       vector<vector<bool>>dp(N,vector<bool>(target+1,false));
       return helper(nums,N,target,dp); 
    }
};