//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int N=arr.size();
        int target=sum;
         vector<vector<bool>>dp(N,vector<bool>(target+1,false));
    for(int i=0;i<N;i++)
{
    dp[i][0]=true;
}
        dp[0][arr[0]]=true;
    for(int i=1;i<N;i++)
    {
        for(int j=1;j<=target;j++)
        {
             bool nottake=dp[i-  1][j];
            bool take=false;
            if(arr[i]<=j)
                take=dp[i-1][j-arr[i]];
           
            dp[i][j]=take|nottake;
}
}
    return dp[N-1][target];
}
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends