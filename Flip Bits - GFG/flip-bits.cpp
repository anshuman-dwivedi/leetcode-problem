//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
       int curr_sum=0;
       int best_sum=0,ones=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]==1)
           {
               ++ones;
               curr_sum+=-1;
           }
           else
           curr_sum+=1;
           if(curr_sum>best_sum)
           best_sum=curr_sum;
            if(curr_sum<0)
           curr_sum=0;
       }
       return best_sum+ones;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends